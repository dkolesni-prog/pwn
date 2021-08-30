cmake_minimum_required(VERSION 3.0)

project(faculties)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE_EXE main.cpp BaseOrg.cpp
        Chamber.cpp Discipline.cpp
        Faculty.cpp RegularFaculty.cpp
        SectoralFaculty.cpp FacultiesDataBase.h FacultiesDataBase.cpp
        SUBD.cpp SUBD.h)

add_executable(main ${SOURCE_EXE})
