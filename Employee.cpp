#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee(const string& name, const string& password, int id, double salary)
    : Person(name, password, id), salary(0)
{
    set_salary(salary);
}

bool Employee::set_salary(double salary)
{
    if (Validation::is_valid_salary(salary)) {
        this->salary = salary;
        return true;
    }
    cout << "Invalid salary! Must be >= 5000\n";
    return false;
}

double Employee::get_salary() const {
    return salary;
}

string Employee::getinfo() const
{
   retutn "Employee ID: " + to_string(id) + "\n";
    + "Name: " + name + "\n";
    + "Salary: " + to_string(salary) + "\n";
   
}
