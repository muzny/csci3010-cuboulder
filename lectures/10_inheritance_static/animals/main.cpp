#include <iostream>

#include "Animal.h"

// Name(s): 

int main() {

    Reptile ralph("alligator");
	std::cout << ralph.MakeSound() << std::endl;
    Turtle ralph2("boo");
	std::cout << ralph2.MakeSound() << std::endl;

    // 1) Instantiate another animal 

    // 2) Call the Fight method of animal
    ralph.Fight(ralph2);

    // 3) Go to the Animal.h file and define some new subclasses of animal

    // 4) Instantiate at least one object of each class you defined for #3

    // 5) Have a battle royale between the animals that you have instantiated 
    
	return 0;
}
