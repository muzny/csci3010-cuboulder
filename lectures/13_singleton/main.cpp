#include <iostream>
#include "Earth.h"

// Names:
//

int main(int argc, char **argv){
    // 0) Implement your Earth's constructor in Earth.cpp

    // 1) Get an instance of your earth object

    Earth & e = Earth::GetInstance();

    // 2) Get another instance of your earth object

    // 3a) Test to see if the two Earth instances from #1 and #2 are stored at the same
    // location in memory.

    // 3b) Call IncreasePopulation from one of your Earth instances. Can you see this change
    // from your other Earth instance?

    // 4) Create a public field in your Earth object. Do you need an instance of an Earth object
    // to access this field?


    // the field that you are testing is not static

    // fun experiment! how about a static public field? 
    // look at the lecture 12 code for an example of how to 
    // initialize a static field


    std::cout << Earth::continents_ << std::endl;




	return 0;
}
