Design Patterns
---------------
- general, reusable solutions to commonly occurring problems
- not language specific

Types
1. creational - Singleton (today), Factory, Prototype (next week)
2. structural - Flyweight (Friday)
3. behavioral - Iterator (Friday)


Singleton
---------
- a class that only ever has one single instance


Where/when to use:
------------
1. certain graphical user interfaces, we might only want one window
2. when you need 1 and only 1 instance of a class
3. networking & threading management systems
4. logging systems

Where/when not use:
---------------
1. just replace global variables 
2. just saving memory (look at other alternatives)

How (c++):
----------
1. make constructor private
2. static instance field and a static GetInstance method
3. (c++ specific) delete/make private the copy constructor and the assignment operator
























