#include "include/EmployeeController.h"
#include "include/Employee.h"
#include "include/EmployeeView.h"

int main() {

    EmployeeView view;
    Employee e(0, "Muhammed", "muhammed@gmail.com");
    
    EmployeeController controller(e, view);

    controller.view();
}