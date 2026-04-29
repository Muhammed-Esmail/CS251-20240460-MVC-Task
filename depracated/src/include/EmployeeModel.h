#pragma once
#include "Input.h"
#include "Employee.h"
#include "EmployeeView.h"
#include <vector>

class EmployeeView;

class EmployeeModel{
private:
    EmployeeView* view;
    
    long next_id;
    
    std::vector<Employee> employees;

public:
    void add_employee(Employee new_emp);
    void delete_employee(const int id);
    void update_employee(const Employee& upd_emp);
    Employee get_emp(const int id);

    void notify(const Input& inp) const;


    void set_view(EmployeeView& view);

    EmployeeModel() : next_id(0) {}
};