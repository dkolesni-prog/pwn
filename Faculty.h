#ifndef FACULTY_H
#define FACULTY_H

#include <string>
#include <fstream>
#include <vector>
#include "Chamber.h"

class Faculty {
private:
    std::string _name;
    std::string _NUK;
    int _number_of_chambers;
    std::vector<Chamber> _chambers;
public:
    Faculty( std::string name, std::string NUK, int n_chambers, std::vector <Chamber> vec_of_chambers); // const &
    virtual void f() = 0;
    virtual ~Faculty();
    virtual void dump(std::ofstream& out);
    virtual void load(std::ifstream& in);
};

#endif // FACULTY_H