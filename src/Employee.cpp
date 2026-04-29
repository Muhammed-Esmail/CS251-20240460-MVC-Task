#include "include/Employee.h"

void Employee::setName(std::string name) {
    this->name = name;
}
void Employee::setEmail(std::string email) {
    this->email = email;
}

void Employee::setID(int id) {
    this->id = id;
}


std::string Employee::getName() {return this->name;}
std::string Employee::getEmail() {return this->email;}
int Employee::getID() {return this->id;}