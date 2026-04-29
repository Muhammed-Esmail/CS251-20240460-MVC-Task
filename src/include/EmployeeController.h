#pragma once
#include "EmployeeView.h"
#include "Employee.h"


class EmployeeController {
private:
    EmployeeView* ev;
    Employee* e;

public:
    EmployeeController(Employee& e, EmployeeView& view);
    void setEmployeeName(std::string name);
    void setEmployeeEmail(std::string email);
    void setEmployeeID(int id);

    std::string getEmployeeName();
    std::string getEmployeeEmail();
    int getEmployeeID();

    void view();
};