PE 2 (Generic `Point`)
=================

For this exercise, you should turn in four files on canvas:

`Point.cc` or `Point.cpp` (should include function comments)

`Point.h`

`main.cc` or `main.cpp` (should include file comment)

`Makefile`

Modify your `Point` class or use the one provided (will be posted 9/3, when PE 1 is due) to create a `Point` that can be n-dimensional. Your `Point`’s constructor should take either a vector or an array of integers as an argument. You should add a method that reports how many dimensions this `Point` object is. You should modify your getter and setter methods so that they work and make sense. Modify your `Translate` method so that it affects all coordinates of this `Point`.

(Hint: make it so your getter method takes an int indicating which dimension the user is interested in the value of.)
(Hint: you may find that using a `std::vector<int>` to store your coordinates will be easier than an `int[]`.)
(Hint: read [copying vectors in c++](https://www.geeksforgeeks.org/ways-copy-vector-c/) for a sense of how to initialize your vector field in your constructor.)

Modify your `Distance` method so that it calculates the euclidean distance between two n-dimensional points where `n` is equal for both points. In the case in which Distance is called with a `Point` that doesn't match the dimensions of `this`, the behavior is up to you. One option is to throw an informative error.

If you'd like to throw an error, `std::invalid_argument("message")` will suffice:

```c++

#include <stdexcept>

....

// where you want to throw the exception:
// include in the comments for this function:
// @throws invalid_argument [describe condition here]
throw std::invalid_argument("informative message here");

```

Grading
------

You will be graded in two general categories for this assignment:
- functionality
- organization and style

__You will lose significant credit if your submission does not compile.__
