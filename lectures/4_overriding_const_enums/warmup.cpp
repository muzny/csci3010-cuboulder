#include <iostream>

// Warm-up:
// What is the output of the following program?

// PE 3 
// input parameter - "regular" information that you're giving to the function
// output parameter - passed as a pointer (normally) in c++, value will be filled in
// by the function

void MysteryFunction(int & x1, int * x2) {
    *x2 = x1 * 2;
}

int main() {
    int my_num = 7;
    int * your_num;
    MysteryFunction(my_num, your_num);
    std::cout << my_num << std::endl;
    std::cout << *(your_num) << std::endl;

    int my_num2 = 1;
    int * your_num2 = &my_num2;
    MysteryFunction(my_num2, your_num2);
    std::cout << my_num2 << std::endl;
    std::cout << *(your_num2) << std::endl;

    int my_num3 = 11;
    int * your_num3 = NULL;
    MysteryFunction(my_num3, your_num3);
    std::cout << my_num3 << std::endl;
    std::cout << *(your_num3) << std::endl;
}
