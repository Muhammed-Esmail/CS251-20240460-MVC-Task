#pragma once
#include "Employee.h"
#include "EmployeeModel.h"
#include "Input.h"

class EmployeeModel;

class EmployeeView{
    EmployeeModel* model;


    void new_emp_added(const int id) const;
    void emp_updated(const int id) const;
    void emp_deleted(const int id) const;
    
public:
    void employee_summary(const int id) const;

    void exit() const;
    
    void invalid_input() const;

    Input prompt_for_input();
    
    void display_menu() const;
    
    void update(const Input& inp) const;

    void set_model(EmployeeModel& model);
};