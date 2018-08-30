# This is an example make file

CXX = g++  # the compiler
CXXFLAGS = -std=c+11 -ggdb -Wall  # flags for the compiler (use c++11 standards, include gdb debug info, turn on all optional warnings)

# runs for "make all"
all: target1 target2

# runs for "make target1"
target1: DependsOn.o
    $(CXX) $(CXXFLAGS) main.cpp DependsOn.o -o target1 # name of output should be consistent

DependsOn.o: DependsOn.cpp
    $(CXX) $(CXXFLAGS) -c DependsOn.cpp

# runs for "make target2"
target2: DependsOn2.o
    $(CXX) $(CXXFLAGS) main2.cpp DependsOn2.o -o target2 # name of output should be consistent

DependsOn2.o: DependsOn2.cpp
    $(CXX) $(CXXFLAGS) -c DependsOn2.cpp

# runs for "make clean"
clean:
    rm DependsOn.o DependsOn2.o target1 target2  #include all targets here

