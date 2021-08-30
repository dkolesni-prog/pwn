#ifndef REGULAR_FACULTY_H
#define REGULAR_FACULTY_H

#include "Faculty.h"

class RegularFaculty : public Faculty {
private:

public:
    RegularFaculty(std::string name, std::string NUK, int n_chambers, std::vector <Chamber> vec_of_chambers);
    virtual void f();
    virtual ~RegularFaculty();
    virtual void dump(std::ofstream& out) override;
    virtual void load(std::ifstream& in) override;
};

#endif // REGULAR_FACULTY_H