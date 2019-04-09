#include <iostream>
#include <string>
#include <vector>

// Names:
//
//

// std::vector<int>

template <typename T>
void Print(T value) {
    std::cout << value << std::endl;
}

template <typename T>
void PrintVector(std::vector<T> values) {
    for (T value : values) {
       std::cout << value << std::endl;
    }
}

// 6) implement a templated version of AddToValues, "AddToValues2".

template <typename T>
std::vector<T> AddToValues2(std::vector<T> values, T val) {
    for (int i = 0; i < values.size(); i++) {
       values[i] += val;
    }
    return values;
}

// 12) to be given in class
struct Blob {
    int x;
}

int main() {
    // 7) call AddToValues2, passing in an int vector and another int.


    // 8) compile this file to object code (g++ -std=c++11 -Wall exercises2.cpp -o exercises2.o),
    // then run `nm -C exercises2.o`. How many versions of the AddToValues2 function are in the
    // compiled object code? Copy + paste the relevant lines here:
    //
    //

    // 9) call AddToValues2, passing in a vector of a non-int type and a value that you can add
    // successfully to the elements

    // 10) compile this file to object code (g++ -std=c++11 -Wall exercises2.cpp -o exercises2.o),
    // then run `nm -C exercises2.o`. How many versions of the AddToValues2 function are in the
    // compiled object code? Copy + paste the relevant lines here:
    //
    //

    // 11) Experiment to find calls to this function that you would like to work but that do
    // not yet work. for each function call that doesn't work, comment about what type of 
    // error is produced.

    std::vector<double> ds = {3.4, 5.1};
    ds = AddToValues2<double>(ds, 10);

    std::vector<std::string> s = {"cat", "dog"};
    s = AddToValues2(s, std::string("z"));

    // 13) to be given in class
    // a) call AddToValues2 wi/ vector of your struct and one struct to add to the elements
    // b) if there is an error, tell me what it is
    // c) if there is an error, try to fix it
}
