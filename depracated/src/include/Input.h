#pragma once
#include "Employee.h"

enum class inputType : int {
    ADD_EMP, 
    UPDATE_EMP,
    DELETE_EMP,
    SHOW_EMP,
    EXIT,
    INVALID
};

struct Input {
    inputType inpt_type;
    Employee emp;
};