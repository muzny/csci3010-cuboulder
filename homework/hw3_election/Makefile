CXX = g++
CXXFLAGS	= -std=c++11 -Wall

all: election

clean:
	rm election ElectoralMap.o Election.o TextUI.o

election: main.cpp ElectoralMap.o Election.o TextUI.o
	$(CXX) $(CXXFLAGS) main.cpp ElectoralMap.o Election.o TextUI.o -o election

ElectoralMap.o: ElectoralMap.cpp
	$(CXX) $(CXXFLAGS) -c ElectoralMap.cpp

Election.o: Election.cpp
	$(CXX) $(CXXFLAGS) -c Election.cpp

TextUI.o: TextUI.cpp
	$(CXX) $(CXXFLAGS) -c TextUI.cpp
