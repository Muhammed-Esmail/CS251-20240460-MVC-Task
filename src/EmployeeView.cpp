#include "include/EmployeeView.h"

void EmployeeView::printEmployeeDetails(Employee& emp) {

    std::cout << "\n=================================\n";

    std::cout << "Employee " << emp.getName() << " summary:\n";
    std::cout << "ID: " << emp.getID() << '\n';
    std::cout << "Email: " << emp.getEmail() << '\n';

    std::cout << "\n=================================\n";

}