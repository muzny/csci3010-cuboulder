#include <iostream>

class Creature {
public:
    Creature(int power) : pow_(power) {}

    virtual int get_power() {return pow_ + 1;};

private:
    int pow_;
};

class Cow: public Creature {
public:
    Cow(int power) : Creature(power) {}

    int get_power() {return 7;};
};

int main() {
    Cow c(10);
    std::cout << c.get_power() << std::endl;

    Creature * c2 = new Cow(10);
    std::cout << c2->get_power() << std::endl;

}
