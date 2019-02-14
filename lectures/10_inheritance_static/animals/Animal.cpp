#include <iostream>
#include <string>

#include "Animal.h"

void Animal::Fight(Animal &opponent) {
	// first animal wins ties
	std::cout << this->GetPower() << std::endl;
	std::cout << opponent.GetPower() << std::endl;
	if (this->GetPower() >= opponent.GetPower()) {
		std::cout << this->MakeSound() << std::endl;
	} else {
		std::cout << opponent.MakeSound() << std::endl;
	}
}

