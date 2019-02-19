Design Patterns (Part 1)
========================

general, reusable solutions to commonly occurring problems (non-language specific)

1. Creational - Singleton, Factory, Prototype
2. Structural - Flyweight
3. Behavioral - Iterator

Singleton
-----------

What:  
A class that only has one single instance.  


How:  
1. Private constructor
2. static instance field + static GetInstance method
3. private or deleted copy constructor and assignment operators


When to use:
1. Logger System
2. GUIs (Graphical User Interfaces) — certain windows
3. Thread recycling pool
4. When you actually need only 1 object to exist


When not to use:  
1. When you just want global variables.
2. When you just want to save space (look at other alternatives).

