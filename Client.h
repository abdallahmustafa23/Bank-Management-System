#pragma once
#include "Person.h"

class Client : public Person {
private:
	double balance;
public:
	Client(const string& name, const string& password, int id, double balance);

	bool set_balance(double balance);
	
	pair<double, bool> deposit(double amount);

	pair<double, bool> withdraw(double amount);

	pair<double, bool> transfar_to(Client anothur, double amount);
	double get_balance()const;
	void check_balance()const;
	string getinfo() const;


