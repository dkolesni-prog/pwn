//
// Created by Daniil Kolesnik on 20/08/2021.
//

#ifndef FACULTIES_SUBD_H
#define FACULTIES_SUBD_H
#include "FacultiesDataBase.h"
//namespace fs = std::filesystem;

class SUBD {

    static std::string _path;
    std::string name;



public:
    SUBD(std::string _name);
    void rename(FacultiesDataBase university, std::string new_name);
    void delete_DB(std::string to_delete);
    FacultiesDataBase create_DB(std::string name);
    void add(FacultiesDataBase& object);

};


#endif //FACULTIES_SUBD_H
