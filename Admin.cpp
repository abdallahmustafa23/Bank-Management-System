#include "Admin.h"
#include <iostream>

using namespace std;

Admin::Admin(const string& name, const string& password, int id, double salary)
    : Employee(name, password, id, salary)
{
}

string Admin::getinfo() const
{
    retutn "Admin ID: " + to_string(id) + "\n";
    + "Name: " + name + "\n";
    + "Salary: " + to_string(salary) + "\n";
}
