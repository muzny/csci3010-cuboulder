CXX = g++
CXXFLAGS	= -std=c++11 -Wall
CXXTESTFLAGS = --coverage # can be used to generate files that help calculate unit test coverage
CXXGDB = -ggdb

all: test

clean:
	rm test # Rectangle.o (because you can't recompile this one!)

test: Rectangle.o test.cpp
	$(CXX) $(CXXFLAGS) test.cpp Rectangle.o -o test

cov: Rectangle.o test.cpp
	$(CXX) $(CXXFLAGS) $(CXXTESTFLAGS) test.cpp Rectangle.o -o test

#Rectangle.o: Rectangle.cpp
#	$(CXX) $(CXXFLAGS) -c Rectangle.cpp
