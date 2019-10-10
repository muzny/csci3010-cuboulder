Starting the Election homework (up to +10 extra credit)
==============

Here are some guidelines for getting started on HW 3. If you complete these by Tuesday, October 15th, at 12pm noon, you'll get up to +10 points extra credit.

Homework 3 is all about creating an [election simulator](../homework/hw3_election/). For this programming exercise, you're going to work through some exercises that will be very helpful in getting started.

1. You may find incorporating [`map`s](https://en.cppreference.com/w/cpp/container/map) into your program very helpful. Write the code for a class `ElectoralMap` that implements the singleton design pattern. When instantiated, this `ElectoralMap` should assign unique ids to 4 different `District`s and store them in a `map` with id mapping to `District`. Use a static field to help with the unique ids.
    1. Your `District`s should be a regular class.
    2. You should override the `operator<<` for both the `ElectoralMap` and the `District`.
    3. You should use a `static const int` field in your `ElectoralMap` to designate the number of `District`s. Example [in Earth.h](../../lectures/13_singleton/Earth.h).
    4. Each `District` should start with a random area between 5 and 29 square miles.
    5. You should implement a `get_district(int id)` method in `ElectoralMap` that lets you access `District`s by id.
    6. You do __not__ need to implement any other methods. (Though you will want to for your complete homework!)
    7. Test your code when you change your number of districts to a number other than 4.

2. Write a `main.cpp` concurrently with step 1 and include adequate code to test your `ElectoralMap` and `District` classes.

__To turn in__:
- electoralmap.zip, including:
    - Makefile
    - main.cpp
    - ElectoralMap.h (you can put both your `ElectoralMap` and your `District` class definitions here)
    - ElectoralMap.cpp
