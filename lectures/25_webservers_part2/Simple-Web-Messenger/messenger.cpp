#include "client_http.hpp"
#include "server_http.hpp"

// Added for the json-example
#define BOOST_SPIRIT_THREADSAFE
#include <boost/property_tree/json_parser.hpp>
#include <boost/property_tree/ptree.hpp>

// Added for the default_resource example
#include <algorithm>
#include <boost/filesystem.hpp>
#include <fstream>
#include <vector>
#ifdef HAVE_OPENSSL
#include "crypto.hpp"
#endif

// so we can see what's happening on the server side easily
#include <iostream>

using namespace std;
// Added for the json-example:
using namespace boost::property_tree;

using HttpServer = SimpleWeb::Server<SimpleWeb::HTTP>;
using HttpClient = SimpleWeb::Client<SimpleWeb::HTTP>;

// We are using text files as our database --
// this is not a good design, but it makes it so that we
// can run our server without also setting up a database.
// Since we are practicing with the GET/POST enpoints in a c++
// server, we will leave interacting with the database for CSCI 3308
string GetChatRoomsFile() {
  return "chatrooms.txt";
}

// this is going to fetch a list of the chatrooms for us
vector<string> LoadRooms() {
  string rooms_file = GetChatRoomsFile();  // such a secure fake database

  vector<string> rooms;
  ifstream file(rooms_file);
  string str; 
  while (getline(file, str)) {
    rooms.push_back(str);
  }
  return rooms;
}

// This function loads the contents of an individual chat room
// as an html-formatted string
string LoadChatLog(string room) {
  ifstream file(room + ".txt");
  string str; 
  string log;
  while (getline(file, str)) {
    log += ("<p>");
    log += (str);
    log += ("</p>");
  }
  return log;
}


// This is a helper function so that when you are running your
// server, you can see what requests it is receiving
void LogRequestInfo(shared_ptr<HttpServer::Request> request) {
  cout << "Request from: " << request->remote_endpoint().address().to_string() << ":" << request->remote_endpoint().port() << endl;
  cout << request->method << " " << request->path << " HTTP/" << request->http_version << endl;  
}


int main() {
  // HTTP-server at port 8080 using 1 thread
  // Unless you do more heavy non-threaded processing in the resources,
  // 1 thread is usually faster than several threads
  HttpServer server;
  server.config.port = 8080;


  // GET-example for the path /info
  // Responds with request-information

  // TODO: PE 14 - modify the code here to make the chatroom names links to those chatrooms
  server.resource["^/chatrooms$"]["GET"] = [](shared_ptr<HttpServer::Response> response, shared_ptr<HttpServer::Request> request) {
    LogRequestInfo(request);
    stringstream stream;

    vector<string> rooms = LoadRooms();

    SimpleWeb::CaseInsensitiveMultimap query_fields = request->parse_query_string();
    string target_room = "";
    for(auto &field : query_fields) {
      if (SimpleWeb::case_insensitive_equal(field.first, "room")) {
        target_room = field.second;
      }
    }

    // if a target room was passsed in, display the contents of that room
    if (!target_room.empty()){
      if(find(rooms.begin(), rooms.end(), target_room) != rooms.end()) {
        // load the room's chat log
        stream << "<h2>" << target_room << "</h2>";
        stream << LoadChatLog(target_room);
        response->write(stream);
      } else {
        response->write(SimpleWeb::StatusCode::client_error_not_found, "Could not open room: " + target_room);
      }
    } else {  // otherwise display the available rooms
      stream << "<h2>Available Chat Rooms</h2>";
      stream << "<ul>";
      for (string room : rooms) {
        stream << "<li>" << room << "</li>";
      }
      stream << "</ul>";
      response->write(stream);
    }
    
  };

  // POST-example for the path /createroom
  // receives a plain-text content payload
  server.resource["^/createroom$"]["POST"] = [](shared_ptr<HttpServer::Response> response, shared_ptr<HttpServer::Request> request) {
    LogRequestInfo(request);

    // Retrieve string:
    string content = request->content.string();
    // create a new blank chatroom with this name

    ofstream outfile(content + ".txt");
    outfile << "" << std::endl;
    outfile.close();

    // add this chatroom to the list of chatrooms
    ofstream rooms_outfile;
    rooms_outfile.open(GetChatRoomsFile(), std::ios_base::app);
    rooms_outfile << content << endl; 
    rooms_outfile.close();

    *response << "HTTP/1.1 200 OK\r\nContent-Length: " << content.length() << "\r\n\r\n"
              << content;


    // Alternatively, use one of the convenience functions, for instance:
    // response->write(content);
  };


  // POST-example for the path /message
  // receives a JSON-formatted payload
  server.resource["^/message$"]["POST"] = [](shared_ptr<HttpServer::Response> response, shared_ptr<HttpServer::Request> request) {   
    LogRequestInfo(request);

    try {
      ptree pt;
      read_json(request->content, pt);

      string name = pt.get<string>("name");
      string room = pt.get<string>("room");
      string message = pt.get<string>("message");
      cout << "Adding message to room: " << room << endl;
      cout << name << ": " << message << endl;

      // add this message to the appropriate chatroom
      ofstream rooms_outfile;
      rooms_outfile.open(room + ".txt", std::ios_base::app);
      rooms_outfile << name << ": " << message << endl; 
      rooms_outfile.close();

      *response << "HTTP/1.1 200 OK\r\n"
                << "Content-Length: " << name.length() << "\r\n\r\n"
                << name;
    } catch (const exception &e) {
      *response << "HTTP/1.1 400 Bad Request\r\nContent-Length: " << strlen(e.what()) << "\r\n\r\n"
                << e.what();
    }

    // Alternatively, use one of the convenience functions, for instance:
    // response->write(content);
  };

  // TODO: PE 14 add the annouce endpoint here!

  // Default GET-example. If no other matches, this anonymous function will be called.
  // Will respond with content in the web/-directory, and its subdirectories.
  // Default file: index.html
  // Can for instance be used to retrieve an HTML 5 client that uses REST-resources on this server
  server.default_resource["GET"] = [](shared_ptr<HttpServer::Response> response, shared_ptr<HttpServer::Request> request) {
    LogRequestInfo(request);
    try {
      auto web_root_path = boost::filesystem::canonical("web");
      auto path = boost::filesystem::canonical(web_root_path / request->path);
      // Check if path is within web_root_path
      if(distance(web_root_path.begin(), web_root_path.end()) > distance(path.begin(), path.end()) ||
         !equal(web_root_path.begin(), web_root_path.end(), path.begin()))
        throw invalid_argument("path must be within root path");
      if(boost::filesystem::is_directory(path))
        path /= "index.html";

      SimpleWeb::CaseInsensitiveMultimap header;

      auto ifs = make_shared<ifstream>();
      ifs->open(path.string(), ifstream::in | ios::binary | ios::ate);

      if(*ifs) {
        auto length = ifs->tellg();
        ifs->seekg(0, ios::beg);

        header.emplace("Content-Length", to_string(length));
        response->write(header);

        // Trick to define a recursive function within this scope (for example purposes)
        class FileServer {
        public:
          static void read_and_send(const shared_ptr<HttpServer::Response> &response, const shared_ptr<ifstream> &ifs) {
            // Read and send 128 KB at a time
            static vector<char> buffer(131072); // Safe when server is running on one thread
            streamsize read_length;
            if((read_length = ifs->read(&buffer[0], static_cast<streamsize>(buffer.size())).gcount()) > 0) {
              response->write(&buffer[0], read_length);
              if(read_length == static_cast<streamsize>(buffer.size())) {
                response->send([response, ifs](const SimpleWeb::error_code &ec) {
                  if(!ec)
                    read_and_send(response, ifs);
                  else
                    cerr << "Connection interrupted" << endl;
                });
              }
            }
          }
        };
        FileServer::read_and_send(response, ifs);
      }
      else
        throw invalid_argument("could not read file");
    }
    catch(const exception &e) {
      response->write(SimpleWeb::StatusCode::client_error_bad_request, "Could not open path " + request->path + ": " + e.what());
    }
  };


  server.on_error = [](shared_ptr<HttpServer::Request> /*request*/, const SimpleWeb::error_code & /*ec*/) {
    // Handle errors here
    // Note that connection timeouts will also call this handle with ec set to SimpleWeb::errc::operation_canceled
  };

  thread server_thread([&server]() {
    // Start server
    server.start();
  });

  // Wait for server to start so that the client can connect
  this_thread::sleep_for(chrono::seconds(1));

  server_thread.join();
}
