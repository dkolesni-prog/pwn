//
// Created by Daniil Kolesnik on 20/08/2021.
//

#include "SUBD.h"


std::string SUBD::_path = "/Users/daniilkolesnik/Downloads/Faculties-master/cmake-build-debug/Testing/vault/";


SUBD::SUBD(std::string _name) : name(_name) {}

void SUBD::rename(FacultiesDataBase university, std::string new_name) {
    std::filesystem::path path = std::filesystem::current_path(); //getting path

        std::cout << "Old path was " << path << std::endl;

        std::filesystem::current_path(_path); //setting path

        path = std::filesystem::current_path();

        std::cout << "Current path is " << std::filesystem::current_path() << '\n';

        std::string extended_new_name = new_name + ".txt";


        std::string extended_old_name = university.GetName() + ".txt";


        std::filesystem::rename(path/extended_old_name,path/extended_new_name);

        if (new_name != university.GetName())
            std::filesystem::remove(path/extended_old_name);
}

void SUBD::delete_DB(std::string to_delete) {
    std::filesystem::path path = std::filesystem::current_path(); //getting path
    std::filesystem::current_path(_path); //setting path
    path = std::filesystem::current_path();
    std::string extended_to_delete = to_delete + ".txt";
    std::filesystem::remove(path/extended_to_delete);
}

void SUBD::add(FacultiesDataBase &object) {}








