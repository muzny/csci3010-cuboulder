Iterator (review)
=================
- an interface to loop through a collection of values (you don't have to know how big the collection is or how it's organized)
1. begin, vector<type>::iterator it = vec.begin()
2. next, it++, ++it
3. end/terminate, vec.end()

// an example "for each" loop - uses the iterator design pattern under the hood
for (type value : collection ) {

}

// an example of a regular for loop using an iterator rather than an index
for (vector<type>::iterator it = vec.begin(), it != vec.end(); it++) {

}

Factory
========
- a method or object/class whose primary purpose is to manage the creation of other objects
- some objects are annoying to create (lots of parameters, heavy dependencies on ordering of initializing many things)

- Time & Calendar type objects are a place where you'll commonly see this implemented
Time(month, day, year, timezone, hours, minutes, seconds, milliseconds) // lots of paramteres

- frequently used to manage the creation of Flyweighted objects

When:
-----
- when the object you're creating is very configurable & there are common configurations being used or heavy dependencies

When not:
--------
- all the time (Factory should give us a benefit, not just provide extra mechanics for calling constructors without making our lives easier)
