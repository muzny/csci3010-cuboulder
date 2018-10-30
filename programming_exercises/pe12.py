# PE 12 - CSCI 3010 - python prep work
# Name:

# Comments in python start with a #

############################## Python Interpreter Questions ##########################
# Explore these questions in a python interpreter from the command line
# Run the python interpreter by typing "python". Make sure that you are running python version 3
# You'll see something like "Python 3.6.1 |Anaconda 4.4.0 (x86_64)| (default, May 11 2017, 13:04:09)"
# When you start the interpreter.
# If you start it and the version is not 3.x.x, try running "python3".
#
# 1. how do you declare a variable? Give an example.
#
# 2. How do you declare a variable of type int? float? string? boolean?
#
#
#
#
# 3. How do you declare a variable that is an empty list? a non-empty list?
#
#
# 4. How do you find the length of a string or a list in python?
#
#
# 5. How do you print to standard out?
#
#
# 6. What does whitespace (spaces, tabs) indicate in python?
#
#
#
#####################################################################################


# 1. run this file from the command line. What command did you use?
# Answer:

# Here is a function defined in python
def add_values(val1, val2):
    added = val1 + val2
    print(added)

# 2. Write at least 3 function calls to add_values using different types as parameters


def print_all_values(thing):
    for subthing in thing:
        print(subthing)


# 3. Write at least 2 function calls to print_all_values using different types as parameters


# 4. Modify the function below so that if any 2 (or 3) colors are within 10 of each other,
# it prints "Mixed!" instead.
def color_dominance(red, green, blue):
    dominant = max(red, green, blue)
    if dominant == red:
        print("Most red!")
    elif dominant == green:
        print("Most green!")
    else:
        print("Most blue!")

# 5. Write at least 3 function calles to color_dominance here


# 6. Write a function that returns a value, call that function, save the value in a variable, and print the value.


# 7. Write a function called add_to_values that takes two parameters, a list, and a value to add to every element
# in the list. This function should mutate the values in the original list.
#
# Call your function at least three times, using a list of ints, a list of boolean values, and a list of strings



# 8. Add a distance method to the following Point object
# Do number 10 before you do number 8 and 9!
class Point:

    # This is the constructor!
    def __init__(self, x, y):
        self.x = x
        self.y = y

    # 9. When is this method called?
    #
    def __str__(self):
        return "(" + str(self.x) + ", " + str(self.y) + ")"

    def get_quadrant(self):
        if self.x >= 0 and self.y >= 0:
            return 1
        elif self.x < 0 and self.y >= 0:
            return 2
        elif self.x < 0 and self.y < 0:
            return 3
        else:
            return 4

# 10. Instantiate two Points more Points here, calling all methods that they have!
p1 = Point(0, 2)



