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
		salary = 0.0;
	}
	Employee(string name, int id, string password, double salary) :Person(name,id,password){
		Validator::checkSalary(salary);
		this->salary = salary;
	}
	void setSalary(double salary) {
		Validator::checkSalary(salary);
		this->salary = salary;
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

