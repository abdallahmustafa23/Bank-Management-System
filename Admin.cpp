#include "Admin.h"
#include <iostream>

using namespace std;

Admin::Admin(const string& name, const string& password, int id, double salary)
    : Employee(name, password, id, salary)
{
}

string Admin::display() const
{
    string info;
    info += "Admin ID: " + to_string(id) + "\n";
    info += "Name: " + name + "\n";
    info += "Salary: " + to_string(salary) + "\n";
    return info;
}
