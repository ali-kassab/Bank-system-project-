#pragma once
#include<iostream>
#include<string>
#include "Person.h"
#include "Validator.h"
using namespace std;

class Employee: public Person
{
	double salary;
public:
	Employee() {
		name = "";
		id = 0;
		password = "";
		salary = 0.0;
	}
	Employee(string name, int id, string password, double salary) {
		Validator::checkName(name);
		Validator::checkPassword(password);
		Validator::checkSalary(salary);
		this->name = name;
		this->id = id;
		this->password = password;
		this->salary = salary;
	}
	void setName(string name) {
		Validator::checkName(name);
		this->name = name;
	}
	void setId(int id) {
		this->id = id;
	}
	void setPassword(string password) {
		Validator::checkPassword(password);
		this->password = password;
	}
	void setSalary(double salary) {
		Validator::checkSalary(salary);
		this->salary = salary;
	}
	string getName() {
		return name;
	}
	int getId() {
		return id;
	}
	string getPassword() {
		return password;
	}
	double getSalary() {
		return salary;
	}
	void displayInfo() {
		cout << "Employee name: " << name << endl;
		cout << "Employee ID: " << id << endl;
		cout << "Employee password: " << password << endl;
		cout << "Employee salary: " << salary << endl;
	}
};

