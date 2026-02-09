#pragma once
#include "Employee.h"

class Admin : public Employee
{
public:
    Admin(const string& name, const string& password, int id, double salary);

    string display() const;
};
