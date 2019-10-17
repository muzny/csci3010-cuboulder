PE 5 (unit testing)
==============

(To be done in pairs, preferably.)

Your job has two parts for this programming assignment. Both parts involves using [provided code](pe5_provided/). Using the folder of provided files that corresponds to the operating system that you and your partner are working on, do the following:

1. __Find the bugs__: We have given you the compiled-to-object-code version of `Rectangle.cpp`. The code that this was compiled from is buggy. Find those bugs. You should write unit tests for the constructor and each of the member functions (other than `get_p1` and `get_p2`).

2. __Implement a non-buggy version of `Rectangle.cpp`__: After you have found the bugs, implement your own `Rectangle.cpp` file that doesn't have bugs. You should run run the same `test` executable that you used to find the bugs in step 1 against your newly implemented `Rectangle.cpp`. Pay special attention to the constructor, it should not let someone construct a `Rectangle` that will be unable to properly use its methods. 




You'll turn in one zip file per partnership on canvas: `pe5.zip` containing `test.cpp`, `Rectangle.[h,cpp]`, `catch.hpp`, and your `Makefile`. Make sure that you include the names of both partners in your submission.

__In the comments of `Rectangle.cpp`:__ Make sure to include the names of yourself and your partner, then, __write the bugs that you found in the original `Rectangle.o` file in the comments before your implementations__.
