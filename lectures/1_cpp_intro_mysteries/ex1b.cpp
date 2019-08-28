#include <iostream>

struct Thing {
    int a;
    double b;
};

int main() {
    Thing t1;
    t1.a = 5;
    t1.b = 1.5;
    std::cout << t1.a + t1.a / t1.b << std::endl;
}
