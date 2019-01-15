Programming Exercise 1 (`Point`)
==================

For this exercise, you should turn in four files as `pe1.zip` on canvas:

`Point.cc` or `Point.cpp` (should include function comments)

`Point.h`

`main.cc` or `main.cpp` (should include file comment)

`Makefile`

Your `Point` class will define a 2 dimensional point (a point with an x, and y coordinate). It should have getter methods for each coordinate and a method, `Distance`, to calculate the euclidian distance between this `Point` and another. Note that `Distance` is a method of the `Point` class.

Your main function should create at least three points, calculate the distance between them, and report their coordinates and the calculated distance to the user. You do not need to prompt the user for the coordinates of the `Point`s that you create.

For your `Makefile`, refer to the posted resources on [Makefiles](../resources.md) and the [example Makefile](../examples/Makefile). Your Makefile should include a target for `make all` and a target for `make clean`.

Refer to the style [guidelines](../concise_style_guide_cpp.md). To receive full credit for this assignment, your code must be commented and must compile on the CS VM or [Jupyter Lab](https://coding.csel.io).

Grading
------

You will be graded in two general categories for this assignment:  
- functionality
- organization and style

__You will lose significant credit if your submission does not compile.__
