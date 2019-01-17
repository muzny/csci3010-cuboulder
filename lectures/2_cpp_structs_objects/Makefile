# This is an example make file

CXX = g++  # the compiler
CXXFLAGS = -std=c++11 -Wall  # flags for the compiler (use c++11 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

# runs for "make all"
all: scope person_old person

clean:
	rm scope person_old person Person.o

scope:
	$(CXX) $(CXXFLAGS) scope.cpp -o scope

person_old:
	$(CXX) $(CXXFLAGS) person_old.cpp -o person_old

person: Person.o main.cpp
	$(CXX) $(CXXFLAGS) Person.o main.cpp -o person

Person.o: Person.h
	$(CXX) $(CXXFLAGS) -c Person.cpp

