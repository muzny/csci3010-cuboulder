CXX = g++
CXXFLAGS	= -std=c++11 -Wall

all: election

clean:
	rm election ElectoralMap.o Election.o

election: main.cpp ElectoralMap.o Election.o
	$(CXX) $(CXXFLAGS) main.cpp ElectoralMap.o Election.o -o election

ElectoralMap.o: ElectoralMap.cpp
	$(CXX) $(CXXFLAGS) -c ElectoralMap.cpp

Election.o: Election.cpp
	$(CXX) $(CXXFLAGS) -c Election.cpp
