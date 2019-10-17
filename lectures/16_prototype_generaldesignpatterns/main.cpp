#include <iostream>
#include <vector>

#include "Disease.h"
#include "Creature.h"

// Names:
//
//


int main() {
    // seed random only once
    srand( time(0) );

    // Part 1 (factory) (COMPLETED DURING LECTURE 15)
    // ---------------
    // 4) get pointers to one of each type of your Disease objects via your DiseaseFactory. Then,
    // call the Disease's get_count method to see how many Disease objects have been instantiated.
    std::cout << "Count of diseases: " << Disease::get_count() << std::endl;
    Disease * flu = DiseaseFactory::GetFlu();
    Disease * cold = DiseaseFactory::GetCold();
    Disease * sickle_cell = DiseaseFactory::GetSickleCell();
    std::cout << "Count of diseases: " << Disease::get_count() << std::endl;


    // 5) are your DiseaseFactory's Get____() methods static or non-static? Do you think that they should
    // be one or the other? Justify your answer. If your methods are static, what would change if they were
    // non-static? If they are non-static, what would change if they were static?

    // 6) Feel free to create more creatures here
    Creature original_creature(14);
    Creature middle_creature(34);
    Creature old_creature(74);

    // 7) Infect your creatures with your diseases. Test out the Creature Spread method.
    // Warning: Spread is an _UNTESTED_ method. 
    original_creature.Infect(flu);
    original_creature.Infect(cold);
    original_creature.Infect(sickle_cell);


    std::cout << "Original creature's diseases: " << std::endl;
    std::cout << original_creature << std::endl;

    original_creature.Spread(&middle_creature);
    original_creature.Spread(&old_creature);

    std::cout << "middle creature's diseases: " << std::endl;
    std::cout << middle_creature << std::endl;

    std::cout << "old creature's diseases: " << std::endl;
    std::cout << old_creature << std::endl;

 
    // Part 2 (prototype) 
    // ---------------
    // 3) Create some new Creature * objects by using the Creature's Clone() method. 
    // Does this method use dynamic dispatch?
    // Answer:
    // How did you test this?





    // When you finish:
    // -------------
    // 4) Write a new function in this file void ScienceLab(Creature * original) (not associated with any classes)
    // that takes an original creature and conducts experiments by cloning it and measuring the spread of disease.
    // You have complete creative freedom here. Feel free to add methods to the Disease/Creature classes.
    // (The only requirements are the function definition and that you must call Clone() within that function).
    //
    // Call your ScienceLab function as many times as is necessary for your experiments.


    // Show your completed work to Felix (raise your hand)
}

