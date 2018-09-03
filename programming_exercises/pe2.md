PE 2 (Generic `Point`)
=================

Modify your `Point` class or use [the one provided](https://moodle.cs.colorado.edu/mod/resource/view.php?id=30051) (will be posted 9/4, when PE 1 is due) to create a `Point` that can be n-dimensional. Your `Point`’s constructor should take a vector of integers as an argument. You should add a method that reports how many dimensions this `Point` object is. You should modify your getter methods so that they still work. 

(Hint: make it so your getter method takes an int indicating which dimension the user is interested in the value of.)
(Hint: using a `std::vector<int>` to store your coordinates will be significantly easier than an `int[]`.)
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

