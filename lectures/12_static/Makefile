CXX = g++
CXXFLAGS    = -std=c++11 -Wall

all: main

clean:
	rm Tree.o main

main: Point.o tree_main.cpp
	$(CXX) $(CXXFLAGS) tree_main.cpp Tree.o -o main

Point.o: Tree.cpp
	$(CXX) $(CXXFLAGS) -c Tree.cpp
