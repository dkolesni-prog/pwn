#include <iostream>
#include <fstream>

#include <filesystem>
#include "SUBD.h"

//5.1) Создание однотипных БД и гибридных БД.
//5.2) Вывод на экран списка существующих БД. +
//5.3) Удаление БД. +
//5.4) Переименование БД. +
//5.5) Открытие БД.
//5.6) Сохранение БД.
//5.7) Добавление записей в БД.
//5.8) Удаление записей в БД. +
//5.9) Вывод на экран записей БД.
//5.10) Сортировка записей БД.
//5.11) Выборка записей БД по правилу (подмножество записей).
//5.12) Сохранение выборки как новой БД (по желанию пользователя).

//namespace fs = std::filesystem;  НЕ ИСПОЛЬЗОВАТЬ ПРОСТВАНСТВА ИМЕН УМОЛЯЮ
//Перед запуском стоит поменять путь до файла. Он лежит в FacultiesDataBase.cpp
// Методы отмеченные плюсиком готовы и отлажены.

int main() {





   //     std::string str_path = "/Users/daniilkolesnik/Downloads/Faculties-master/cmake-build-debug/Testing/vault";
//    fs::path path = std::filesystem::current_path(); //getting path
//    std::cout << "Old path was " << path << std::endl;
//    std::filesystem::current_path(str_path); //setting path
//    path = std::filesystem::current_path();
//    std::cout << "Current path is " << fs::current_path() << '\n';
//    fs::rename(path/"test.txt",path/"file2.txt"); // OK



//    std::filesystem::path p = FacultiesDataBase::path();
//    std::filesystem::create_directory(p);
//    SUBD my_SUBD("My_SUBD") ;
//
//    FacultiesDataBase uni1("MSU");
//    uni1.dump();
//
//    std::cout << uni1.GetName();


  //  my_SUBD.rename(uni1, "BMSTU");

 // my_SUBD.delete_DB("MSU");


    //msu.rename("1","MSU2");
   // msu.load();






    return 0;
}