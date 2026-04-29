#pragma once
#include <string>
#include <iostream>

class Employee {
private:
    int id;
    std::string name, email;

public:
    Employee(int id, std::string name, std::string email) 
        : id(id), name(name), email(email) {}

    void setName(std::string name);
    void setEmail(std::string email);
    void setID(int id);


    std::string getName();
    std::string getEmail();
    int getID();
};  