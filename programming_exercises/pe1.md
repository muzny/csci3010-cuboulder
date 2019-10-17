Programming Exercise 1 (`Point`)
==================

For this exercise, you should turn in four files on canvas:

`Point.cc` or `Point.cpp` (clarification 8/29: should contain the implementations of your functions, should include function comments)

`Point.h` (clarification 8/29: should contain the definition of your class, don't forget [a header guard](../examples/structs_objs_declarations.md#objectsclasses)!) 

`main.cc` or `main.cpp` (should include file comment)

`Makefile`

Your `Point` class will define a 2 dimensional point (a point with an x, and y coordinate). It should have getter and setter methods for each coordinate and two methods, `Distance`, to calculate the euclidian distance between this `Point` and another, and `Translate`, which moves all of this `Point`s coordinates by whatever integer value is passed to the method. Note that `Distance` and `Translate` are methods of the `Point` class.

Your main function should create at least three points, calculate the distance between them, and report their coordinates and the calculated distance to the user. You do not need to prompt the user for the coordinates of the `Point`s that you create.

Your main function should then translate one of the `Point`s that you've created by a positive amount, then report the new coordinates and calculated distances to the user. It should then translate the same `Point` by a negative amount, then report the new coordinates and calculated distances to the user.

For your `Makefile`, refer to the posted resources on [Makefiles](../resources.md#compiling-and-makefiles) and the [example Makefile](../examples/Makefile). Your Makefile should include (at minimum) a target for `make all` and a target for `make clean`.

Refer to the style [guidelines](../concise_style_guide_cpp.md). To receive full credit for this assignment, your code must be commented and must compile on the CS VM or [Jupyter Lab](https://coding.csel.io).

Grading
------

You will be graded in two general categories for this assignment:  
- functionality
- organization and style

__You will lose significant credit if your submission does not compile.__
