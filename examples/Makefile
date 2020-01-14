# This is an example make file

CXX = g++  # the compiler
CXXFLAGS = -std=c++17 -Wall  # flags for the compiler (use c++17 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

# runs for "make all"
all: target1 target2

# runs for "make target1"
# the line below this one must be TABBED in (not spaces!)
# files DependsOn.o and main.cpp will be monitored for changes to know if it needs to be re-made
target1: DependsOn.o main.cpp
    $(CXX) $(CXXFLAGS) main.cpp DependsOn.o -o target1 # name of output should be consistent

DependsOn.o: DependsOn.cpp
    $(CXX) $(CXXFLAGS) -c DependsOn.cpp

# runs for "make target2"
target2: DependsOn2.o main2.cpp
    $(CXX) $(CXXFLAGS) main2.cpp DependsOn2.o -o target2 # name of output should be consistent

DependsOn2.o: DependsOn2.cpp
    $(CXX) $(CXXFLAGS) -c DependsOn2.cpp

# runs for "make clean"
clean:
    rm DependsOn.o DependsOn2.o target1 target2  #include all targets here

