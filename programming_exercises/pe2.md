PE 2 (Generic `Point`)
=================

Modify your `Point` class or use the one provided (will be posted 9/4, when PE 1 is due) to create a `Point` that can be n-dimensional. Your `Point`’s constructor should take a vector of integers as an argument. You should add a method that reports how many dimensions this `Point` object is. You should modify your getter methods so that they still work. 

(Hint: make it so your getter method takes an int indicating which dimension the user is interested in the value of.)

Modify your `Distance` method so that it calculates the euclidean distance between two n-dimensional points where `n` is equal for both points. In the case in which Distance is called with a `Point` that doesn't match the dimensions of `this`, the behavior is up to you. One option is to throw an informative error.

