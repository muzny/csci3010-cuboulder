A few resources to get started with python
================

The Basics
-----------
Python is a dynamically-typed programming language in which __whitespace is significant__. We won't dive into the depths of scope in python, but if you are planning on writing python code, it's a subject that I highly recommend exploring!  
  
Python files are written with a `.py` suffix. You can run them from the command-line with the command `python program.py`. They do not need to be compiled.  
  
We'll be using python 3 for the examples in this class. If you run `python --version` from the command line, it will tell you what version you are running. If you are running python 2.x, you will likely be able to run python 3 with the command `python3`.  
  
To open a python interpreter on the command line, just run the command `python`, to exit, type ctrl-d.

1. declaring variables
```python
# this is a comment
# my_var = value is the general form
x = 12
y = 0.2
z = True
s = "this is a string"  # python strings are immutable
```

2. Writing functions
```python
def my_function(param1, param2):
  print("Param 1: " + str(param1))  # these two print statements do the same thing
  print("Param 2:", param2)
```

3. Calling functions
```python
my_function("hello", "there")
my_function(1, 100)
my_function(True, 123.456)
```

4. Creating lists
```python
ls = [1, 2, 4] # this is a list
ls2 = [True, "banana", 3] # also a list
print(len(ls)) # get the length of a list or string with the len function
```

For more information:
- consult [this cheat sheet](http://www.cogsci.rpi.edu/~destem/igd/python_cheat_sheet.pdf)
- and/or [these notes that I've written for CSCI 1200](https://github.com/muzny/csci1200-notes)
