#ifndef CHAMBER_H
#define CHAMBER_H

#include <string>
#include <vector>
#include "Discipline.h"
#include <iostream>

// Класс кафедра
class Chamber {
private:
//    std::string _name;                       // Название кафедры
//    std::vector<Discipline> _disciplines;    // Список дисциплин
public:
    std::string _name;                       // Название кафедры
    std::vector<Discipline> _disciplines;
    friend std::ostream& operator<<(std::ostream& out, const Chamber& chamber);
    friend std::istream& operator>>(std::istream& in, Chamber& chamber);
};

#endif // CHAMBER_H