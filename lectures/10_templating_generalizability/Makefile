CXX = g++
CXXFLAGS = -std=c++11 -Wall

all: exercises exercises2

clean:
	rm exercises exercises.o exercises2 exercises2.o

exercises: exercises.o
	$(CXX) $(CXXFLAGS) exercises.o -o exercises

exercises.o: exercises.cpp
	$(CXX) $(CXXFLAGS) -c exercises.cpp

exercises2: exercises2.o
	$(CXX) $(CXXFLAGS) exercises2.o -o exercises2

exercises2.o: exercises2.cpp
	$(CXX) $(CXXFLAGS) -c exercises2.cpp
