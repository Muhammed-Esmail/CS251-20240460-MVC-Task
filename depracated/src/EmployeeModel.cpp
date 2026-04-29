#include "include/EmployeeModel.h"

void EmployeeModel::set_view(EmployeeView& view) {
    this->view = &view;
}

void EmployeeModel::add_employee(Employee new_emp) {
    
    Input inp;
    inp.inpt_type = inputType::ADD_EMP;

    new_emp.id = next_id++;

    employees.push_back(new_emp);
    
    inp.emp = new_emp;

    notify(inp);
}

void EmployeeModel::delete_employee(const int id) {
    
    Input inp;
    inp.inpt_type = inputType::DELETE_EMP;
    inp.emp.id = -1;

    auto it = employees.begin();
    
    while(it != employees.end()) {
        if(it->id == id) {
            employees.erase(it);
            inp.emp.id = id;
            notify(inp);
            return;
        }
        it++;
    }
    notify(inp);
}

void EmployeeModel::update_employee(const Employee& upd_emp) {
    Input inp;
    inp.inpt_type = inputType::UPDATE_EMP;
    inp.emp.id = -1;

    auto it = employees.begin();
    
    while(it != employees.end()) {
        if(it->id == upd_emp.id) {
            *it = upd_emp;
            inp.emp.id = upd_emp.id;
            notify(inp);
            return;
        }
        it++;
    }
    notify(inp);
}

Employee EmployeeModel::get_emp(const int id) {
    Input inp;
    inp.inpt_type = inputType::SHOW_EMP;
    inp.emp.id = -1;

    auto it = employees.begin();
    
    while(it != employees.end()) {
        if(it->id == id) {
            const Employee& e = *it;
            return e;
        }
        it++;
    }

    return inp.emp;
}

void EmployeeModel::notify(const Input& inp) const{
    this->view->update(inp);
}