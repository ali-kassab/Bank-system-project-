#pragma once
#include<iostream>
#include<string>
using namespace std;

class Validator
{
public:
	static void checkName(string name){
		if (name.length()<5 || name.length()>20) {
			throw invalid_argument("Name must be between 5 and 20 characters");
		}
	}

	static void checkPassword(string password) {
		if (password.length() < 8 || password.length() > 20) {
			throw invalid_argument("Password must be between 8 and 20 characters");
		}
	}

	static void checkSalary(double salary) {
		if (salary < 5000) {
			throw invalid_argument("Salary must be above 5000") ;
		}
	}
};

