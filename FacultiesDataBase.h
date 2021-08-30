#ifndef FACULTIES_DATA_BASE_H
#define FACULTIES_DATA_BASE_H

#include "Faculty.h"
#include "RegularFaculty.h"
#include "SectoralFaculty.h"
#include <vector>
#include <fstream>
#include <filesystem>


class FacultiesDataBase {
private:
//friend class SUBD;
    std::string _name;
    std::vector<Faculty*> _faculties;

    static std::string _path;
    static void dumpItem(Faculty* faculty, std::ofstream& out);
    static int loadItem(Faculty** faculty, std::ifstream& in);  
public:
    explicit FacultiesDataBase(const std::string&);

    static const std::string& path();

    void dump();
    void load();
    std::string GetName();

};

#endif // FACULTIES_DATA_BASE_H