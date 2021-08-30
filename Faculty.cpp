#include "Faculty.h"

Faculty::~Faculty() {}

void Faculty::dump(std::ofstream& out) {
    out << _name << " " << _NUK << " " << _number_of_chambers << "\n";
    for (const auto& chamber : _chambers) {
        out << chamber << "\n";
    }
}

void Faculty::load(std::ifstream& in) {
    in >> _name >> _NUK >> _number_of_chambers;
    for (int i = 0; i < _number_of_chambers; ++i) {
        Chamber chamber;
        in >> chamber;
        _chambers.push_back(chamber);
    }
}

Faculty::Faculty(std::string name, std::string NUK, int n_chambers, std::vector<Chamber> vec_of_chambers):_name(name),
_NUK(NUK),_number_of_chambers(n_chambers), _chambers(vec_of_chambers)
{

}
