#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include "Validator.h"
using namespace std;

class Admin : public Person
{
private:
    double salary;

public:
    Admin() : Person() {
        salary = 0.0;
    }

    Admin(string name, int id, string password, double salary)
        : Person(name, id, password)
    {
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

    void displayInfo() override {
        cout << "Admin name      : " << name << endl;
        cout << "Admin ID        : " << id << endl;
        cout << "Admin password  : " << password << endl;
        cout << "Admin salary    : " << salary << endl;
    }
};
