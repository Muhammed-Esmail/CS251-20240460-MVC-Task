#pragma once
#include <string>
#include <iostream>

struct Employee {
    int id;
    std::string name;
    double salary;
    std::string position;
    
    Employee() : id(-1), name(""), salary(0.0), position("") {}

    Employee(int id, std::string name, double salary, std::string position) 
        : id(id), name(name), salary(salary), position(position) {}
};