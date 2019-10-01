CXX = g++
CXXFLAGS	= -std=c++11 -Wall
CXXGDB = -ggdb

all: main

clean:
	rm main Animal.o

main: Animal.o main.cpp
	$(CXX) $(CXXFLAGS) main.cpp Animal.o -o main


Animal.o: Animal.cpp
	$(CXX) $(CXXFLAGS) -c Animal.cpp
