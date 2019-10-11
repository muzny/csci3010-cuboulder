

Flyweight
---------

(structural)
- only one instance * of each type * of a class
- Day object -> Monday, Tuesday, Wednesday ... 
- a bit like enums + inheritance

Where to use:
-------------
1. when indiv. objects are memory intensive and we are using the same kinds over and over again


Where not to use:
---------------
1. if you are basically implementing a glorified enum

How (c++)
----
1. instantiate one instance per type of your class (e.g. SquareType class)
2. when you need to reference the wall instance of SquareType (for example), use a pointer
(see the game design blog linked from [resources.md](../../resources.md)

Iterator
-------
(behavioral)
- provides a consistent interface for accessing the elements of a collection in order

Where to use:
------------
1. when you implment a data structure that should be traversable






