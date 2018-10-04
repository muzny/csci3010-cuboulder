#ifndef _DISEASE_H_
#define _DISEASE_H_

// 1) Make a new class DiseaseFactory

// 2) Implement a method Disease * GetFlu() that takes no parameters and returns
// a Disease pointer to a flu object. The flu is communicable, it is not hereditary,
// is not bacteria, is a virus, and strikes the young and old more readily than the middle aged
// Go ahead and make up answers for the other traits.

// 3) Implement a method Disease * GetCold() that takes no parameters and returns a
// Disease pointer to a cold object. Colds are bacteria based. Use what you know and your
// imagination to fill in the other fields.

// 4) Implement a method that returns a pointer to a Disease object of your choice (can be a real disease,
// can be something that you've made up).

// 5) in main.cpp, get pointers to your diseases and Infect some Creature objects (how many of each is up to you)
// (the rest of the work for this part will take place in main.cpp)

class Disease {
public:
    Disease(std::string name,
            bool is_communicable,
            bool is_hereditary,
            bool bacteria_based,
            bool virus_based,
            double strikes_young_rate, // between 0 (no chance) and 1 (always)
            double strikes_old_rate,   // between 0 (no chance) and 1 (always)
            double strikes_middle_aged_rate, // between 0 (no chance) and 1 (always)
            double fatality_rate,
            std::string location) :
    name_(name),
    is_communicable_(is_communicable),
    is_hereditary_(is_hereditary),
    bacteria_based_(bacteria_based),
    virus_based_(virus_based),
    strikes_young_rate_(strikes_young_rate),
    strikes_old_rate_(strikes_old_rate),
    strikes_middle_aged_rate_(strikes_middle_aged_rate),
    fatality_rate_(fatality_rate),
    location_(location)
    {}

    std::string get_name() const { return name_; };
    bool get_is_communicable() const { return is_communicable_;};
    bool get_is_hereditary() const { return is_hereditary_;};
    bool get_bacteria_based() const { return bacteria_based_;};
    bool get_virus_based() const { return virus_based_; };
    double get_strikes_young_rate() const { return strikes_young_rate_; };
    double get_strikes_old_rate() const { return strikes_old_rate_; };
    double get_strikes_middle_aged_rate() const { return strikes_middle_aged_rate_; };
    double get_fatality_rate() const { return fatality_rate_; };
    std::string get_location() const { return location_; };

    friend std::ostream& operator<<(std::ostream &os, const Disease &d);

private:
    std::string name_;
    bool is_communicable_;
    bool is_hereditary_;
    bool bacteria_based_;
    bool virus_based_;
    double strikes_young_rate_;
    double strikes_old_rate_;
    double strikes_middle_aged_rate_;
    double fatality_rate_;
    std::string location_;
};



#endif // _DISEASE_H_
