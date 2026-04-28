#include "include/EmployeeView.h"
#include "include/Input.h"

void EmployeeView::employee_summary(const int id) const{
    const Employee& emp = model->get_emp(id); 

    if(emp.id == -1) {
        std::cout << "Employee was not found." << '\n';
    }else {
        std::cout << "Employee " << emp.name << " summary:\n";
        std::cout << "ID: " << emp.id << '\n';
        std::cout << "Position: " << emp.position << '\n';
        std::cout << "Salary: " << emp.salary << '\n';
    }
}

void EmployeeView::exit() const {
    std::cout << "Thank you for using my application!\n";
    std::cout << "Exiting...\n";
}

void EmployeeView::display_menu() const{
    std::cout << "\n=================================\n";
    std::cout << "Welcome!\n";

    std::cout << "What would you like to do?\n\n";
}


Input EmployeeView::prompt_for_input() {
    
    Input input;
    
    try {
        std::cout << "Add Employee {0}: \n";
        std::cout << "Edit Employee {1}: \n";
        std::cout << "Delete Employee {2}: \n";
        std::cout << "Show Employee {3}: \n";
        std::cout << "Exit {4}: \n\n";

        int user_response;

        std::cin >> user_response;

    
        switch (user_response)
        {
        case 0:
            input.inpt_type = inputType::ADD_EMP;

            std::cout << "Provide New Employee Data: \n";

            std::cout << "New Employee Name: \n";
            std::cin >> input.emp.name;
            
            std::cout << "New Employee Position: \n";
            std::cin >> input.emp.position;

            std::cout << "New Employee Salary: \n";
            std::cin >> input.emp.salary;
            break;

        case 1:
            input.inpt_type = inputType::UPDATE_EMP;

            std::cout << "Select Employee and Provide Updated Data: \n";
            std::cout << "Employee ID: \n";
            std::cin >> input.emp.id;

            std::cout << "New Name: \n";
            std::cin >> input.emp.name;
            
            std::cout << "New Position: \n";
            std::cin >> input.emp.position;

            std::cout << "New Salary: \n";
            std::cin >> input.emp.salary;
        break;

        case 2:
            input.inpt_type = inputType::DELETE_EMP;

            std::cout << "Select Employee to remove: \n";
            std::cout << "Employee ID: \n";
            std::cin >> input.emp.id;
        break;

        case 3:
            input.inpt_type = inputType::SHOW_EMP;

            std::cout << "Select Employee to show: \n";
            std::cout << "Employee ID: \n";
            std::cin >> input.emp.id;
        break;

        case 4:
            input.inpt_type = inputType::EXIT;
        break;
        
        default:
            input.inpt_type = inputType::INVALID;
            break;
        }
    }
    catch(...) {
        input.inpt_type = inputType::INVALID;
    }

    std::cout << "\n=================================\n";

    return input;
}

void EmployeeView::invalid_input() const {
    std::cout << "Invalid Input!\n";
    std::cout << "Please try again...\n";
}

void EmployeeView::new_emp_added(const int id) const {
    if(id == -1)
        std::cout << "Error: ID was previously taken, try another one.\n";
    else 
        std::cout << "New Employee added with ID " << id << '\n';
}

void EmployeeView::emp_deleted(const int id) const {
    if(id == -1)
        std::cout << "Employee with ID could not be found\n";
    else
        std::cout << "Employee with ID " << id << " was deleted\n";
}

void EmployeeView::emp_updated(const int id) const {
        if(id == -1)
        std::cout << "Employee with ID could not be found\n";
    else
        std::cout << "Employee with ID " << id << " was updated\n";
}

void EmployeeView::update(const Input& inp) const {
    switch (inp.inpt_type)
    {
    case inputType::ADD_EMP:
        new_emp_added(inp.emp.id);
        break;

    case inputType::UPDATE_EMP:
        emp_updated(inp.emp.id);
        break;

    case inputType::DELETE_EMP:
        emp_deleted(inp.emp.id);
        break;

    default:
        break;
    }
}

void EmployeeView::set_model(EmployeeModel& model) {
    this->model= &model;
}