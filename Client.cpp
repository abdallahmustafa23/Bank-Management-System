#include "Client.h"

Client::Client(const string& name, const string& password, int id, double balance)
	: Person(name, password, id), balance(0)
{
	set_balance(balance);
}
bool Client::set_balance(double balance)
{
	if (Validation::is_valid_balance(balance)) {
		this->balance = balance;
		return true;
	}
	cout << "Invalid balance! Must be >= 1500\n";
	return false;
}
pair<double, bool> Client:: deposit(double amount) {
	if (amount > 0) {
		balance += amount;
		return { balance,true };
	}
	return{ balance, false };
}

pair<double, bool> Client::withdraw(double amount) {

	if (amount > 0 && amount <= balance) {
		balance -= amount;
		return { balance,true };
	}
	return{ balance, false };
}

pair<double, bool> Client::transfar_to(Client anothur, double amount) {

	if (amount > 0 && amount <= balance) {
		withdraw(balance);
		deposit(anothur.balance);
		return{ anothur.balance,true };
	}
	return{ anothur.balance,false };
}
double Client:: get_balance() { return balance; }

void Client:: check_balance()const {
	cout << balance;
}
string Client::getinfo() const {

	return "Client ID: " + to_string(id)
		+ "\nName: " + name
		+ "\nbalance: " + to_string(balance);
}