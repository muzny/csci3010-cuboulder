Errors
======
c++:
- syntax errors (compile time)
- type errors (compile time)
int x = "cat";
- implicit conversions (warnings/errors compile time)
- linker errors (compile time)
- seg faults (runtime)
- exceptions raised (runtime)

char * argv[] is equivalent to char ** argv

yes, do go ahead and work on the back of the paper 
when you finish the front

Code snippet #3
-------------
- potential issue: for loop walks off the end of the vector
v[i] -- access whatever value is just "beyond" the vector
v.at(i) -- raise an index out of bounds exception

Snippet #5
-----------
if the program is run w/o a command line arg, seg fault
./main 
./main horse

Static vs. Dynamic Type Systems
==============================
c++: example of a static type checking system->compiler will check our types before letting us have an executable

static type checking: happens at compile time
benefits:
- compiler can optimize (run time, memory)
- can find misspelled words and other syntax/"you wrote something wrong" issues
- illegal operations (int + str, calling a method that doesn't exist)

dynamic type checking (e.g. in python):
run time


Python (see course resources github)
====================
x = 7
y = x + 7.3
x = "cat"
x = x + 3 # error

def myfunc(a, b):
    print(a)
    print(b)
    c = a + b

myfunc(1, 2) # calling the function










