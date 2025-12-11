#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include "Validator.h"
using  namespace std;
class Client :public Person {
private:
	double balance;
public:
	Client() {
		balance = 0;
	}
	Client(string name,int id ,string password,double balance) :Person(name,id,password){
		Validator::checkBalance(balance);
		this->balance = balance;
	}
	
	void setBalance(double balance) {
		Validator::checkBalance(balance);
		this->balance = balance;
	}
	
	double getBalance() {
			return balance;
	}
    void deposit(double amount) {
		balance += amount;
	}
    void CheckBalance(double amount) {
	    	if (balance < amount) {
			    throw invalid_argument("amount must be less than or equal to your balance");
		    }
	}
	void witharw(double amount) {
		CheckBalance(amount);
		balance -= amount;
	}
	void transferTo(double amount ,Client* recipient) {
		CheckBalance(amount);
		balance -= amount;
		recipient->balance += amount;
	}
	void displayInfo() {
		cout << "Client name :"<<name<<endl;
		cout << "Client ID :" << id << endl;
		cout << "Client password :" << password << endl;
		cout << "Client balance :" << balance << endl;
	}

};