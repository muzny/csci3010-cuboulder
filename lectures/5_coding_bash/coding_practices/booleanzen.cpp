#include <iostream>
#include <vector>


bool IsEven(const int num) {
    if (num % 2 == 0) {
        return true;
    } else if (num % 2 != 0) {
        return false;
    }   
}

int AbsoluteValue(int num) {
    if (num > 0 == true) {
    } else {
        num = num * -1;
    }
    return num;
}

int main() {
    std::cout << IsEven(7) << std::endl;
    std::cout << IsEven(2) << std::endl;
    std::cout << IsEven(-16) << std::endl;
    
    std::cout << std::endl;


    std::cout << AbsoluteValue(7) << std::endl;
    std::cout << AbsoluteValue(2) << std::endl;
    std::cout << AbsoluteValue(-16) << std::endl;
}
