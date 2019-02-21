CXX = g++
CXXFLAGS	= -std=c++11 -Wall

all: main

clean:
	rm main Society.o

main: main.cpp Society.o
	$(CXX) $(CXXFLAGS) main.cpp Society.o -o main

Society.o: Society.cpp
	$(CXX) $(CXXFLAGS) -c Society.cpp
