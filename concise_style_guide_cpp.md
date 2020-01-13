Concise 3010 C++ Style Guide
==================

[Verbose Style Guide Link](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md)

Spacing
-------
You may use 2 or 4 space indentation. Choose one and be consistent.  

Curly Brackets
-------
You may either place your brackets at the end of the line or the beginning of the next line. Choose one and be consistent.  


Prefer to use curly brackets when they are optional to avoid bugs:  

```c++
int i;
for (i = 0; i < max; ++i); // bug waiting to happen
if (i == j)
    return i;
```

Naming
-------
For naming only, we will be following the [Google C++ Style Guide for Naming](https://google.github.io/styleguide/cppguide.html#Variable_Names).  
Your names should always be meaningful.   

Main points for Naming
--------

Classes and struct names: `CapitalizedLikeThis`, `Point` or `PlayerQueue`  

Variable names: `capitalized_like_this`, `my_var` or `num`  

Class member variables: private variables should have a single trailing `_`: `x_` or `secret_data_`  

Function names: static, helper, and “regular” functions are `NamedLikeThis`, `double Distance(const Point &p) const` or `void CalcArea(const int &width, const int &height, int *area)`

Accessor functions are named like variables, int get_x() const

Files
-----
You do not need one class per file, but your namespaces should make semantic sense.  

Comments
-------
You must comment your code. This includes file comments, function comments, and in-line comments. You may use sensible levels of granularity as required.

__File comments__: should be used to identify yourself, give a brief description of what the program does, and how to run it.  

```c++
/**
Felix Muzny
Homework 1
This program is a fun and exciting two-player maze game.  
It takes one command-line argument, the path to the maze file.
*/
```

__Function comments__: Should provide a brief description of what the function does, what parameters it takes, and what it returns. A user should know how to run the function using only your comment and the function header. For this class, we'll put function comments in the `.cpp` files. [Here is an overview about where documentation normally goes](https://softwareengineering.stackexchange.com/questions/84071/is-it-better-to-document-functions-in-the-header-file-or-the-source-file).

```c++
/**
    Returns the volume of a sphere with the specified radius.

    @param radius The radius of the circle.
    @return The volume of the sphere.
*/
double Volume(double radius);
```

__In-line comments__: Should not repeat your code, but should clarify complicated portions with what they are intended to do.
