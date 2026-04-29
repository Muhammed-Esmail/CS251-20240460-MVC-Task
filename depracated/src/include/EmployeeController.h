#pragma once
#include "Input.h"
#include "EmployeeView.h"
#include "EmployeeModel.h"


class EmployeeController {
private:
    EmployeeModel* model;
    EmployeeView* view;

public:
    void main_loop();

    void set_model(EmployeeModel& model);
    void set_view(EmployeeView& view);

};