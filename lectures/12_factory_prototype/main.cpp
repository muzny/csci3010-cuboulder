#include <iostream>
#include <vector>

#include "Disease.h"
#include "Creature.h"

// Names:
//
//


int main() {
    // Part 1 (factory) 
    // ---------------
    // 5) get pointers to your Disease objects via your DiseaseFactory.

    // 6) are your GetFlu() etc methods static or non-static? Why do you think that they should
    // be one or the other?

    // 7) Feel free to create more creatures here
    Creature original_creature(14);

    // 8) Infect your creatures with your diseases. Test out the Creature Spread method.
    // Warning: Spread is an _UNTESTED_ method. 

    for (Disease * d : original_creature.get_diseases() ) {
        std::cout << *(d) << std::endl;     
    }
 
    // Part 2 (prototype) 
    // ---------------
    // 3) Create some new Creature * objects by using the Creature's Clone() method. Does this method use dynamic dispatch?
    // Answer:


    // 4) Write a new function in this file void ScienceLab(Creature * original) that takes
    // an original creature and conducts experiments by cloning it and measuring the spread of disease.
    // You have complete creative freedom here. Feel free to add methods to the Disease/Creature classes.
    // (The only requirements are the function definition and that you must call Clone() within that function).
    //
    // Call your ScienceLab function as many times as is necessary for your experiments.
}

