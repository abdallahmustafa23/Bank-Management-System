#pragma once
#include "Person.h"

class Employee : public Person
{
protected:
    double salary;

public:
    Employee(const string& name, const string& password, int id, double salary);

    bool set_salary(double salary);
    double get_salary() const;

    string getinfo() const;
};
