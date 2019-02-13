PE 5 (unit testing)
==============

(To be done in pairs, preferably.)

Your job has two parts for this programming assignment. Both parts involve the materials provided in [lecture 8](../lectures/8_git_branches_unittests). Using the folder of provided files that corresponds to the operating system that you and your partner are working on, do the following:

1. __Find the bugs__: We have given you the compiled-to-object-code version of `Rectangle.cpp`. The code that this was compiled from is buggy. Find those bugs. You should write unit tests for the constructor and each of the member functions (other than `get_p1` and `get_p2`).

2. __Implement a non-buggy version of `Rectangle.cpp`__: After you have found the bugs, implement your own `Rectangle.cpp` file that doesn't have bugs.

You'll turn in one zip file per partnership on moodle: `pe5.zip` containing `test.cpp`, `Rectangle.[h,cpp]`, `catch.hpp`, and your `Makefile`.

__In the comments of `Rectangle.cpp`:__ Make sure to include the names of yourself and your partner, then, __write the bugs that you found in the original `Rectangle.o` file in the comments before your implementations__.
