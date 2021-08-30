#include "RegularFaculty.h"

void RegularFaculty::f() {}

RegularFaculty::~RegularFaculty() {}

void RegularFaculty::dump(std::ofstream& out) {
    Faculty::dump(out);
}

void RegularFaculty::load(std::ifstream& in) {
    Faculty::load(in);
}

RegularFaculty::RegularFaculty(std::string name, std::string NUK, int n_chambers, std::vector<Chamber> vec_of_chambers)
        : Faculty(name, NUK, n_chambers, vec_of_chambers) {

}


