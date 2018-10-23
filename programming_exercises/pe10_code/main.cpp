#include <iostream>
#include <vector>

#include "Society.h"

// Name:


// Feel free to edit any of Society.h, Society.cpp and this file in your refactoring
// In addition to the refactoring tasks:
// When you are done, this program should be able to easily run for a different number 
// of cities and you should be able to observe the growth in the cities for a given number of 
// cycles of growth

int main() {
    Society s;
    s.AddCity(1, 107125, "Boulder");
    s.AddCity(2, 165080, "Fort Collins");
    s.AddCity(3, 18465, "Durango");
    s.AddCity(4, 155, "Ward");

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

