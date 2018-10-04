CXX = g++
CXXFLAGS	= -std=c++11 -Wall

all: main

clean:
	rm main Disease.o Creature.o

main: main.cpp Disease.o Creature.o
	$(CXX) $(CXXFLAGS) main.cpp Disease.o Creature.o -o main

Disease.o: Disease.cpp
	$(CXX) $(CXXFLAGS) -c Disease.cpp

Creature.o: Creature.cpp
	$(CXX) $(CXXFLAGS) -c Creature.cpp
