#include <iostream>
#include "Earth.h"

// Names:
//

int main(int argc, char **argv){
    Earth & e = Earth::GetInstance();
    Earth & e2 = Earth::GetInstance();


    std::cout << "original population: " << e.get_population() << std::endl;
    std::cout << "e2 population: " <<e2.get_population() << std::endl;
    e.IncreasePopulation();
    std::cout << "original population: " << e.get_population() << std::endl;
    std::cout << "e2 population: " <<e2.get_population() << std::endl << std::endl;

    // Assignment operator
    // this creates a separate object that uses a different constructor than the one we defined
    Earth e5 = e;
    std::cout << "original population: " << e.get_population() << std::endl;
    std::cout << "e5 population: " <<e5.get_population() << std::endl;
    e.IncreasePopulation();
    std::cout << "original population: " <<e.get_population() << std::endl;
    std::cout << "e5 population: " <<e5.get_population() << std::endl;

    // Copy constructor
    // this creates a separate object that uses a different constructor than the one we defined
    Earth e6(e);
    std::cout << "original population: " << e.get_population() << std::endl;
    std::cout << "e6 population: " <<e6.get_population() << std::endl;
    e.IncreasePopulation();
    std::cout << "original population: " <<e.get_population() << std::endl;
    std::cout << "e6 population: " <<e6.get_population() << std::endl << std::endl;

	return 0;
}
