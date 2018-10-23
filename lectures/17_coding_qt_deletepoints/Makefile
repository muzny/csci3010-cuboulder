CXX = g++
CXXFLAGS	= -std=c++11 -Wall

all: boolean conditionals loops boolean_rf conditionals_rf loops_rf

clean:
	rm boolean conditionals loops boolean_rf conditionals_rf loops_rf

boolean: booleanzen.cpp
	$(CXX) $(CXXFLAGS) booleanzen.cpp -o boolean

conditionals: conditionals.cpp
	$(CXX) $(CXXFLAGS) conditionals.cpp -o conditionals

loops: loopsmagicnums.cpp
	$(CXX) $(CXXFLAGS) loopsmagicnums.cpp -o loops


boolean_rf: booleanzen_rf.cpp
	$(CXX) $(CXXFLAGS) booleanzen_rf.cpp -o boolean_rf

conditionals_rf: conditionals_rf.cpp
	$(CXX) $(CXXFLAGS) conditionals_rf.cpp -o conditionals_rf

loops_rf: loopsmagicnums_rf.cpp
	$(CXX) $(CXXFLAGS) loopsmagicnums_rf.cpp -o loops_rf
