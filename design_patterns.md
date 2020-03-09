Design Patterns
========================

general, reusable solutions to commonly occurring problems (non-language specific)

1. Creational - Singleton, Factory, Prototype
    1. These are about instantiating objects.
2. Structural - Flyweight
    1. These are about how do we use the objects that we've created.
3. Behavioral - Iterator
    1. These are about what interface the objects provide to us.

Singleton
-----------

What:  
A class that only has one single instance.  


How:  
1. Private constructor
2. static instance field + static GetInstance method
    1. Then get instance by code like `Name & n = Name::GetInstance()`.
3. private or deleted copy constructor and assignment operators


When to use:
1. Logger System
2. GUIs (Graphical User Interfaces) — certain windows
3. Thread recycling pool
4. When you actually need only 1 object to exist


When not to use:  
1. When you just want global variables.
2. When you just want to save space (look at other alternatives).


Flyweight
---------

What:
One instance per __type__ of the given class.
to ponder: creational/__structural__/behavioral?

How: 
Often, you will use an array or fields (or a map) to store the examples of the objects
that you're creating.
__Depends entirely on programmer discipline (in  c++)__.
- In your "distribution" class - you will have method that will control the user's 
access to the objects 

When to use:
1. when an individual object is memory intensive __and__ we are using the same kind over and over again

When not to use:
1. No need to flyweight objects that are essentially glorified enums


Iterator
-------
What:  
Specifies an order of traversal for a collection and provides a standard interface
to that traversal.  
  
How:  
- define the starting point for the iterator
- define how to go to the next element
- define the ending point for the iterator

```c++
collection<type>::iterator it = collection_var.begin();

while (it != collection_var.end()) {
  // do whatever
  std::cout << *(it) << std::endl;
  it++;
}
```

Factory
-------
Problem: sometimes objects are cumbersome to create, for instance with a class representing time.  

Time class:  
- Time(hours, minutes, seconds, timezone)  
- Time(hours, minutes)  

Provides an interface:
- get the current time
- get a time representing a certain date
- get a time X hours from now

What: a method or class whose primary objective is to manage the creation of other objects
- frequently used with inheritance (we won't look at this today, but have this on your radar)
1. Abstract away constructors with many parameters/flags
2. Manage any heavy dependcies between objects
3. Manage creation of Flyweighted objects

How: 
Create a wrapper class or method for object constructors or linked dependencies.  

When to use:
- if you have highly configurable objects with some common configurations
- if you need more control over creating objects
- if you have subclasses and you would like an easy interface to instantiate the specific subclass that you need


When not to use:
- for all objects (only use when you have a reason to)
- if your "basic" constructor will do, no need

Prototype
---------
Problem: you want the "client" to have a copy of an object without giving them the actual object. You want to control how objects are created.

How: provide a (virtual) Clone() method (examples in both PE 6 (Item) and in Creature)
- in C++, we have a copy constructor -- not the prototype design pattern is because:
1. it is language specific
2. these are not inherited (special inheritance rules)

When to use:
When you want easy but controlled copying of an object

When not to use:
In c++, if your only purpose is reimplementing the copy constructor




















