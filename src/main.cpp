#include "include/EmployeeController.h"
#include "include/EmployeeModel.h"
#include "include/EmployeeView.h"

int main() {

    EmployeeController controller;
    EmployeeView view;
    EmployeeModel model;

    controller.set_model(model);
    view.set_model(model);

    controller.set_view(view);
    model.set_view(view);

    controller.main_loop();
}