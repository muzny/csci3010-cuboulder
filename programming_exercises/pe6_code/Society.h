#ifndef _SOCIETY_H_
#define _SOCIETY_H_

#include <map>

class City {
public:
    City(int const pop, std::string const name) :
    population_(pop),
    name_(name),
    percent_change_(0.0)
    {}

    int get_population() const { return population_; };
    std::string get_name() const { return name_; };

    void Grow(int const num_people);

    void Shrink(int const num_people);

    bool IsBig() const;

    void set_percent_change(double const percent) { percent_change_ = percent; };

private:
    int population_;
    std::string name_;

    double percent_change_;

    friend std::ostream& operator<<(std::ostream &os, const City &c);
};


class Society {
public:
    
    void AddCity(int id, int population, std::string name) { cities_[id] = new City(population, name); };


    void GrowCities();
    


private:
    std::map<int, City *> cities_;

    friend std::ostream& operator<<(std::ostream &os, const Society &s);
};




#endif  // _SOCIETY_H_ 
