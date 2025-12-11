#pragma once
#include <iostream>
#include <string>
#include "Employee.h"
#include "Validator.h"
using namespace std;

class Admin : public Employee
{
public:
    Admin() : Employee() {}

    Admin(string name, int id, string password, double salary)
        : Employee(name, id, password, salary) {
    }

    void displayInfo() override {
        cout << "Admin name: " << getName() << endl;
        cout << "Admin ID: " << getId() << endl;
        cout << "Admin password: " << getPassword() << endl;
        cout << "Admin salary: " << getSalary() << endl;
    }
};
