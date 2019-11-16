APIs
======
Application Programming Interfaces  

- clearly defined set of methods for communication among various components
- these can be your program accessing the API of an imported library/module, accessing a web API, etc
- for example,  c++ vectors (the methods that they provide as an API):
    - size()
    - push_back()
    - erase()

- In the context of web-programming: APIs
    - we will be interacting with urls/endpoints
    - http(s)://mywebsite.com/endpoint
    - interact by sending HTTP requests
        - *GET - retrieve data - idempotent
        - POST - submitting data, creating resources on the server
        - *PUT - updating or creating a resources - idempotent
        - *DELETE - removing a resource - idempotent

    - idempotent: calling this function 1 time is the same as calling it 10 times
    - REST(ful) API - "stateless" - each request contains everything needed to complete that request

Server/client model
-----------------
- server is just a piece of software that provides functionality to o   ther programs (clients), accept requests from certain ports from those clients
- client - a piece of software (this is sometimes also hardware) that accesses the services provided by a server
- server and client can be co-located (running on the same machine)











