#include <iostream>
#include <map>

struct Book {
    int id;
    std::string text;
};

void PrintBook(Book b) {
    std::cout << "Book: "<< b.id << std::endl;
    std::cout << b.text << std::endl;
}

int main() {
    // seed random with the current time
    srand( time(0) );

    std::map<int, Book> books;

    int num_books = 7;
    int printable_ascii_chars = 93;
    int ascii_print_start = 33;
    int max_length = 100;

    for (int id = 1; id <= num_books; id++) {
        std::string s = "";
        for (int i = 0; i < rand() % max_length + 1; i++) {
            int ascii_num = (rand() % printable_ascii_chars) + ascii_print_start;
            s += (char) ascii_num;
        }
        Book b1({id, s});
        books[id] = b1;
    }

    // now we use the map iterator
    // Create a map iterator and point to beginning of map
    std::map<int, Book>::iterator it = books.begin();
 
    // Iterate over the map using Iterator till end.
    while (it != books.end()) {
        PrintBook(it->second);
        it++;
    }
}

