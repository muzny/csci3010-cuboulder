Feel free to work in groups of 2 - 3!

Name(s): 

Turn in this file with your answers on canvas before you leave today!

[See the resources page for links for information on APIs and web programming](https://github.com/muzny/csci3010-cuboulder/blob/master/resources.md#apis--web-programming)

Section 1: APIs and REST
---------------------------------------------------------
1. In your own words, what is an API?
2. Web Requests  
Say I have a server that accepts both GET and POST requests at the endpoint:
  
`http://catscatscats.ca/info`
    1. What is a [GET](https://developer.mozilla.org/en-US/docs/Web/HTTP/Methods/GET) request?
	    1. How is a GET request formatted?
        2. How are parameters/[query strings](https://en.wikipedia.org/wiki/Query_string) in a GET request sent?
	    3. Side effects on the server when a GET request is sent?
	    4. Write down the url for a GET request for the above endpoint, sending parameters `breed` with value "mainecoon" and `attitude` with value "sassy".



    1. What is a [POST](https://developer.mozilla.org/en-US/docs/Web/HTTP/Methods/POST) request?
	    1. How is it formulated?
	    2. How is data sent? The same as with a GET request? Differently?
	    3. Side effects?
	    4. Write down the url for a POST request for the above endpoint. If I want to send a json with the following information, where would that go? {"id": "catluver7000", "profile_text": "I luuuuv cats"}


Section 2: Investigating requests completed when navigating to a webpage
-------------------------

Open the developer tools to the network pane.
    - For Firefox, right-click, then select "Inspect Element", then choose "Network" in the tab options.
    - For Chrome, right-click, then select "Inspect", then choose "Network" in the tab options.
    - For Safari, choose the "Safari" menu, select Preferences, choose "Advanced", then check the box next to "Show Develop menu in menu bar". Now, from your "Develop" menu, choose "Show Web Inspector", then click the "Network" tab.

You may want to reload the page with your network pane open to see what happens.

1. Navigate to a website. What website did you navigate to and what kind of requests were made? Were they all GET? All POST? a mixture?
2. Find a website that issues both GET and POST requests when you navigate to it.
    1. What is the request payload (also called parameters in some dev. tools) associated with one of the POST requests?
    2. What is the response to the request from the previous question?
    3. Take a look at some of the GET requests. Do these requests have payloads?
    4. What is the response to the request from the previous question?



Section 3: Issuing requests to the Dark Sky API
--------------------------------------

Register for the Dark Sky API (https://darksky.net/dev) if you have not already done this previously.

1. What GET endpoints are available in this API? (are there any?)
2. What POST endpoints are available in this API? (are there any?)
3. Open a new window in your preferred web browser and navigate to `https://api.darksky.net/forecast/[YOUR KEY HERE]/40.0,-105.263`. What does this do?
4. Now, we'll use the command line tool `curl` to do the same thing. (remember that you can read the man page for curl by typing "man curl"
```
The basic format for curl is: curl -i -X [GET|POST|DELETE|etc] [address]
The -i stands for include which includes the HTTP header in the output (helpful)
The -X stands for request which lets us explicitly say what request we are making (default is GET)
```

    1. What is the curl command to issue a GET request to `https://api.darksky.net/forecast/[YOUR KEY HERE]/40.0,-105.263` ?
    2. Write down valid curl commands to access the other endpoints from this API.

Section 4: Investingating `Simple-Web-Server`
-----------------------------
Look at the code at [https://gitlab.com/eidheim/Simple-Web-Server](https://gitlab.com/eidheim/Simple-Web-Server)

1. Let's explore the API in http_examples.cpp!
    1. What GET endpoints are available in this API? What do they do?
    2. What POST endpoints are available in this API? What do they do?

2. This library provides support for both synchronous and asynchronous request handling (see the bottom of http_examples.cpp where the client is used). What is the difference between synchronous and asynchronous here? Why would we want support for both these types of requests? 



Section 5: Get Simple-Web-Server up and running
----------------------------

Follow the set-up instructions in the README. Below is a summary.

1. Install boost
Linux:
$ sudo apt-get update
$ sudo apt-get install libboost-all-dev

Mac OS
if you don't have brew installed, otherwise, go install it first
https://brew.sh/

$ brew install openssl boost

2. Make & build a simple web server
Clone/download all the files at https://gitlab.com/eidheim/Simple-Web-Server
Follow the “Compile and run” instructions for the Simple Web Server

If you do not have cmake installed:
$ sudo apt-get install cmake

At the end of this step, you should have a simple web server that provides an API up and running over http.
