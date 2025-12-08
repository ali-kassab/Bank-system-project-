#pragma once
#include <iostream>
using namespace std;

class Person
{
public:
	string name;
	int id;
	string password;

	virtual void displayInfo() = 0;
};

