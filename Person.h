#pragma once
#include "Validation.h"

class Person
{
protected:
	string name, password;
	int id;
public:
	Person(const string& name,const string& password,int id) :name("no_name"),password("no_password") ,id(id)
	{
		set_name(name);
		set_password(password);		
	}
	bool set_name(const string& name) {
		if (Validation::is_valid_name(name)) {
			this->name = name;
			return true;
		}
		else {
			cout << "Invalid name! Try again.\n";
			return false;
		}
	}
	bool set_password(const string& password) {
		if (Validation::is_valid_password(password)) {
			this->password = password;
			return true;
		}
		else {
			cout << "Invalid password! Try again.\n";
			return false;
		}
	}
	const string& get_name() const { return name; }
	const string& get_password() const { return password; }
	int get_id() const { return id; }
};

