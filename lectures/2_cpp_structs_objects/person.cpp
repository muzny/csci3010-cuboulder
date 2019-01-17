#include <iostream>

struct Person {
    std::string name;
    int age;
};

class Family {
    public:
        Family(int num) {
            num_ = num;
        }
    private:
        int num_;
};

int main() {
    Person p;
    p.name = "Alice";
    p.age = 12;

    // Exercises: find out if two different structs containing the same data are ==
    // What happens if you try to << a struct to cout? why?
}
