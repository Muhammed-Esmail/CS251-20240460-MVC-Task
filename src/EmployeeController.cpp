#include "include/EmployeeController.h"

void EmployeeController::view() {
    ev->printEmployeeDetails(*e);
}

EmployeeController::EmployeeController(Employee& e, EmployeeView& view) {
    this->e = &e;
    this->ev = &view;
}

void EmployeeController::setEmployeeName(std::string name) {
    e->setName(name);
}

void EmployeeController::setEmployeeEmail(std::string email) {
    e->setEmail(email);
}

void EmployeeController::setEmployeeID(int id) {
    e->setID(id);
}

std::string EmployeeController::getEmployeeName() {
    return e->getName();
}
std::string EmployeeController::getEmployeeEmail() {
    return e->getEmail();
}

int EmployeeController::getEmployeeID(){
    return e->getID();
}