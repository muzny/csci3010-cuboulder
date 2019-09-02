
CXX = g++  # the compiler
CXXFLAGS = -std=c++11 -Wall  # flags for the compiler (use c++11 standards, turn on all optional warnings)
GDBINFO = -ggdb # include this to generate info needed to run gdb

all: run_library

clean:
	rm Library.o run_library

run_library: Library.o run_library.cpp
	$(CXX) $(CXXFLAGS) run_library.cpp Library.o -o run_library

Library.o: Library.cpp
	$(CXX) $(CXXFLAGS) -c Library.cpp
