#ifndef SECTORAL_FACULTY_H
#define SECTORAL_FACULTY_H

#include "Faculty.h"
#include "BaseOrg.h"
#include <vector>

class SectoralFaculty : public Faculty {


public:
    std::vector<BaseOrg> _baseorgs;
    SectoralFaculty(std::string name, std::string NUK, int n_chambers, std::vector <Chamber> vec_of_chambers,std::vector <BaseOrg> vec_of_orgs);
    virtual void f();
    virtual ~SectoralFaculty();
    virtual void dump(std::ofstream& out) override;
    virtual void load(std::ifstream& in) override;

};

#endif // SECTORAL_FACULTY_H