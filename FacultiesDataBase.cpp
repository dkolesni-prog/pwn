#include "FacultiesDataBase.h"
#include "RegularFaculty.h"
#include "SectoralFaculty.h"


//std::string FacultiesDataBase::_path = "/home/vg/repos/Faculties-master/build/databases/";
std::string  FacultiesDataBase::_path = "/Users/daniilkolesnik/Downloads/Faculties-master/cmake-build-debug/Testing/vault/";



FacultiesDataBase::FacultiesDataBase(const std::string& n) : _name(n) {}

void FacultiesDataBase::dumpItem(Faculty* faculty, std::ofstream& out) {
    auto isRegular = dynamic_cast<RegularFaculty*>(faculty);
    if (isRegular) {    // Преобразование вернет не нулевой адрес если этот объект обычный факультет
        out << "Regular\n";
        faculty->dump(out);
    }
    else {              // Если факультет оказался отраслевым
        out << "Sectoral\n";
        faculty->dump(out);
    }
}

int FacultiesDataBase::loadItem(Faculty** faculty, std::ifstream& in) {
    std::string type;
    in >> type;
    if (in.eof()) {
        return 1;
    }
    if (type == "Regular") {
        *faculty = new RegularFaculty();
    }
    else {
        *faculty = new SectoralFaculty();
    }
    (*faculty)->load(in);
    return 0;
}

void FacultiesDataBase::dump() {
    std::ofstream out;
    out.open(_path + _name + std::string(".txt"), std::ios::out);
    for (const auto faculty : _faculties) {
        dumpItem(faculty, out);
    }
    out.close();
}

void FacultiesDataBase::load() {
    std::ifstream in;
    in.open(_path + _name + std::string(".txt"), std::ios::in);
    Faculty* faculty = nullptr;
    int result = 0;
    while ((result = loadItem(&faculty, in)) != 1) {
        _faculties.push_back(faculty);
    }
    in.close();
}

const std::string& FacultiesDataBase::path() {
    return _path;
}

std::string FacultiesDataBase::GetName() {
    return _name;
}



