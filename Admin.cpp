#include "Admin.h"


Admin::Admin(const string& name, const string& password, int id, double salary)
    : Employee(name, password, id, salary)
{
}

string Admin::getinfo() const
{
    return "Admin ID: " + to_string(id) 
    + "\nName: " + name 
    + "\nSalary: " + to_string(salary) ;
}
