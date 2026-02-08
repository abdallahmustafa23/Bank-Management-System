#include "Admin.h"
#include <iostream>

using namespace std;

Admin::Admin(const string& name, const string& password, int id, double salary)
    : Employee(name, password, id, salary)
{
}

void Admin::display() const
{
    cout << "Admin ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
}
