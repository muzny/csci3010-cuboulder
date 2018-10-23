#ifndef _SOCIETY_H_
#define _SOCIETY_H_

#include <map>

class City {
public:
    City(int const pop, std::string const name) :
    population_(pop),
    name_(name)
    {}

    int get_population() const { return population_; };
    std::string get_name() const { return name_; };

private:
    int population_;
    std::string name_;
};


class Society {
public:
    
    void AddCity(int id, int population, std::string name) { cities_[id] = new City(population, name); };

private:
    std::map<int, City *> cities_;
};




#endif  // _SOCIETY_H_ 
