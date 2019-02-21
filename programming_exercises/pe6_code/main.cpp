#include <iostream>
#include <vector>

#include "Society.h"

// Name:


// Edit any of Society.h, Society.cpp and this file in your refactoring
// In addition to the refactoring tasks:
// When you are done, this program should be able to easily run for a different number 
// of cities and you should be able to observe the growth in the cities for a given number of 
// cycles of growth

int main() {
    Society s;

    // Prompt the user for the cities they would like to add
    // until they are done adding cities

    s.AddCity(1, 107125, "Boulder");
    s.AddCity(2, 165080, "Fort Collins");
    s.AddCity(3, 18465, "Durango");
    s.AddCity(4, 155, "Ward");

    // Then ask the user how many times they would like to grow the cities

    std::cout << s << std::endl;
    s.GrowCities();
    std::cout << s << std::endl;
    s.GrowCities();
    std::cout << s << std::endl;
    s.GrowCities();
    std::cout << s << std::endl;
    s.GrowCities();
    std::cout << s << std::endl;
}

