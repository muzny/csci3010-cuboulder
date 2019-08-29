# This is an example make file

CXX = g++  # the compiler
CXXFLAGS = -std=c++11 -Wall  # flags for the compiler (use c++11 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

# runs for "make all"
all: scope

clean:
	rm scope

scope:
	$(CXX) $(CXXFLAGS) scope.cpp -o scope
