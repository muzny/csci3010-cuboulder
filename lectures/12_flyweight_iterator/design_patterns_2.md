Design Patterns (Part 2)
=======================

See [part 1](../11_static_singleton/design_patterns_1.md) and [the course resources page](https://github.com/muzny/csci3010-cuboulder/blob/master/resources.md#design-patterns-game-programming-blog) as well!


Flyweight
---------
What:  
Only one instance __of each type__ of a class.

How:  
Often, you will use an array or fields (or a map) to store the examples of the objects
that you're creating.
__Depends entirely on programmer discipline (in  c++)__.
- In your "distribution" class - you will have method that will control the user's 
access to the objects 


When to use:  
1. Individual objects are memory intensive AND we are using the same kind over and over.


When not to use:  
2. When we basically want glorified enums.


Iterator
-------
