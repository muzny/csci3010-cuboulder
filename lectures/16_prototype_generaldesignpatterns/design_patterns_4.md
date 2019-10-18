Design Patterns: Prototype
---------------
- you want to give the client (code) a copy of an object, but not the original object
- you want more control over how the object is copied 

Differences between prototype & c++ copy constructor?
-----------------
- copy constr., no control over how fields are copied
- copy constr. is specific to c++


When
----
- we want easy control over how objects are copied
- often used in conjunction with inheritance

When not
--------
- in c++, don't implement this when you are just reimplementing the copy constructor

How
--
- a method in the base class (if we inheritance), that is virtual ClassName * Clone()

```c++
// examples
ClassName * cn = new ClassName();
ClassName * cn2 = new Subclass();

// if we declare like this, we'll get a Subclass, but
// won't be able to pass it to functions that take Creature
// or store in a collection<Creature>
Subclass cn3;


// dynamic dispatch!
ClassName * cloned_subclass = cn2->Clone();
```



























