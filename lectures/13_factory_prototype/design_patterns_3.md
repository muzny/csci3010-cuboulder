Design Patterns (Part 3)
=======================

See [part 1](../11_static_singleton/design_patterns_1.md), [part 2](../12_flyweight_iterator/design_patterns_2.md), and [the course resources page](https://github.com/muzny/csci3010-cuboulder/blob/master/resources.md#design-patterns-game-programming-blog) as well!


Factory
---------
What:  
- a method or object whose purpose is to facilitate the creation of other objects
- when objects are highly configurable or cumbersome to create


How:  
- essentially wrap complex constructors in a nice interface


When to use:  
- highly configurable object AND common configurations
- control creation of objects (such as in a flyweight pattern)


When not to use:  
- at random for all objects (basically if creating a factory is more work than just using the object as is)


Prototype
-------
(See `Item.h` from the provided code for Homework 2)  
  
What:  
- when you want to give the client a copy of the object but you don't want them to have the original or you want them to have slightly different information
- frequently used in conjunction with inheritance

How:
- implement a method ClassName * Clone()
     - if using inheritance, we want to make it virtual for dynamic dispatch

When to use:  
- when you want controlled copying of an object

When not to use:  
- (c++ specific) if we are just re-implementing the copy constructor AND inheritance isn't involved
