# This is an example make file

CXX = g++  # the compiler
CXXFLAGS = -std=c++11 -Wall  # flags for the compiler (use c++11 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

# runs for "make all"
all: ex1a ex1b ex2 ex4 ex5

clean:
	rm ex1a ex1b ex2 ex4 ex5

ex1a:
	$(CXX) $(CXXFLAGS) ex1a.cpp -o ex1a

ex1b:
	$(CXX) $(CXXFLAGS) ex1b.cpp -o ex1b

ex2:
	$(CXX) $(CXXFLAGS) ex2.cpp -o ex2

ex4:
	$(CXX) $(CXXFLAGS) ex4.cpp -o ex4

ex5:
	$(CXX) $(CXXFLAGS) ex5.cpp -o ex5
