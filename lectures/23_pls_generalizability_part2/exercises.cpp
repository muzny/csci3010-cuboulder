#include <iostream>
#include <string>
#include <vector>

// Names:
//
//


// 1) implement two functions, AddToValues(std::vector<int> v1, int v2)
// and AddToValues(std::vector<double> v1, double v2)
std::vector<int> AddToValues(std::vector<int> vals, int v) {
    for (int i = 0; i < vals.size(); i++) {
        vals[i] += v;
    }
    return vals;
}

std::vector<double> AddToValues(std::vector<double> vals, double v) {
    for (int i = 0; i < vals.size(); i++) {
        vals[i] += v;
    }
    return vals;
}

// 2) Do your AddToValues functions have return values? why/ why not?
// Answer:


int main() {
    // 3) Instantiate an int vector
    std::vector<int> v1 = {1, 5, -3};
    std::vector<int> v2;
    v2.push_back(100);


    // 4) call AddToValues, passing in your int vector and another int.


    // 5) compile this file to object code (g++ -std=c++11 -Wall exercises.cpp -o exercises.o),
    // then run `nm -C exercises.o`. How many versions of the AddToValues function are in the
    // compiled object code? Copy + paste the relevant lines here:
    //
    //
}
