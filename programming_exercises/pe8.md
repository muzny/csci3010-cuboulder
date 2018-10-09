PE 8 (getting a head start on the election homework)
==============

Homework 3 is all about creating an [election simulator](../homeworks/hw3_election/). For this programming exercise, you're going to work through some exercises that will be very helpful in getting started.

1. You may find incorporating `map`s into your program very helpful. Write the code for a class `ElectoralMap` that implements the singleton design pattern. When instantiated, this `ElectoralMap` should assign unique ids to 4 different `District`s and store them in a `map` with id mapping to `District`. Use a static field to help with the unique ids.
    1. Your `District`s should be a regular class.
    2. You should override the `operator<<` for both the `ElectoralMap` and the `District`.
    3. Each `District` should start with a random area between 5 and 29 square miles.
    4. You should implement a `get_district(int id)` method in `ElectoralMap` that lets you access `District`s by id.
    5. You do __not__ need to implement any other methods.

2. Write a `main.cpp` concurrently with step 1 and include adequate code to test your `ElectoralMap` and `District`.

__Note__: do this PE even if you are doing the individual project--practice using maps, implementing singleton, and using static fields.

__To turn in__:
- pe8.zip, including:
    - Makefile
    - main.cpp
    - ElectoralMap.h (you can put both your `ElectoralMap` and your `District` class definitions here)
    - ElectoralMap.cpp

