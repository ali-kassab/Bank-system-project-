#pragma once
#include <iostream>
#include "Validator.h"
using namespace std;

class Person
{
protected:
	string name;
	int id;
	string password;
public:
	Person() {
		name = "";
		id = 0;
		password = "";
	}
	Person(string name, int id, string password) {
		Validator::checkNameType(name);
		Validator::checkNameLength(name);
		Validator::checkPassword(password);
		this->name = name;
		this->id = id;
		this->password = password;
	}
	void setName(string name) {
		Validator::checkNameType(name);
		Validator::checkNameLength(name);
		this->name = name;
	}
	void setId(int id) {
		this->id = id;
	}
	void setPassword(string password) {
		Validator::checkPassword(password);
		this->password = password;
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

	virtual void displayInfo() = 0;
};

