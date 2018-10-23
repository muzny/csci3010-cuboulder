#include <iostream>
#include <string>
#include <map>

#include "Society.h"

bool City::IsBig() const {
    if (population_ > 100000) {
        return true;
    } else if (population_ <= 100000) {
        return false;
    }
    return false;
}

void City::Grow(int const num_people) {
    if (num_people >= 0 == true) {
        int prev = population_;
        population_ += num_people;
        percent_change_ = (1.0 * num_people) / prev;
    }
}

void City::Shrink(int const num_people) {
    if (num_people >= 0 == true) {
        population_ -= num_people;
    }
}

void Society::GrowCities() {
    City * biggest = cities_.at(1);
    if (cities_.at(2)->get_population() > biggest->get_population()) {
        biggest = cities_.at(2);
    }
    if (cities_.at(3)->get_population() > biggest->get_population()) {
        biggest = cities_.at(3);
    }
    if (cities_.at(4)->get_population() > biggest->get_population()) {
        biggest = cities_.at(4);
    }

    for (int i = 1; i <= 4; i++) {
        City * c = cities_.at(i);
        if (c->IsBig() == false){
            int prev = c->get_population();
            double ratio = (1.0 * c->get_population()) / biggest->get_population();
            c->Grow((int) ratio * .3 * c->get_population());
            c->Shrink((int) c->get_population() * .1);
            double percent_change = (1.0 * c->get_population() - prev) / prev;
            c->set_percent_change(percent_change);
        } else {
            int prev_small = c->get_population();
            double ratio = (1.0 * c->get_population()) / biggest->get_population();
            c->Grow((int) ratio * c->get_population());
            c->Shrink((int) c->get_population() * .1);
            double percent_change_small = (1.0 * c->get_population() - prev_small) / prev_small;
            c->set_percent_change(percent_change_small);
        }
    }
}

std::ostream& operator<<(std::ostream &os, const City &c) {
    os << c.name_ << ": " << c.population_  << " (" << c.percent_change_ << "% change)";
    return os;
}

std::ostream& operator<<(std::ostream &os, const Society &s) {
    os << *(s.cities_.at(1)) << std::endl;
    os << *(s.cities_.at(2)) << std::endl;
    os << *(s.cities_.at(3)) << std::endl;
    os << *(s.cities_.at(4)) << std::endl;
    return os;
}
