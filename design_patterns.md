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











