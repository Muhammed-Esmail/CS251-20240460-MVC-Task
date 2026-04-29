#include "include/EmployeeController.h"

void EmployeeController::main_loop() {
    while(true) {
        
        view->display_menu();

        const Input& inp = view->prompt_for_input();

        switch (inp.inpt_type)
        {
        case inputType::ADD_EMP:
            model->add_employee(inp.emp);
            break;
        
        case inputType::DELETE_EMP:
            model->delete_employee(inp.emp.id);
            break;

        case inputType::SHOW_EMP:
            view->employee_summary(inp.emp.id);
            break;
        
        case inputType::UPDATE_EMP:
            model->update_employee(inp.emp);
            break;

        case inputType::INVALID:
            view->invalid_input();
            break;
            
        case inputType::EXIT:
            view->exit();
            return;
            break;
        }
    }
}

void EmployeeController::set_model(EmployeeModel& model) {
    this->model= &model;
}

void EmployeeController::set_view(EmployeeView& view) {
    this->view = &view;
}