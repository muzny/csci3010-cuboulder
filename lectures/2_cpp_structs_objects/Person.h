#ifndef _PERSON_H_
#define _PERSON_H_

#include <string>

struct Person {
    std::string name;
    int age;
};

class Family {
    public:
        Family(int num) {
            num_ = num;
        }

        void AddOne();  // increase the number by one
    private:
        int num_;
};

#endif // _PERSON_H_
