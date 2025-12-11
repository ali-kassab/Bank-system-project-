

#include <iostream>
#include "Employee.h"
#include "Client.h"
#include "Admin.h"
using namespace std;

int main()
{
    try {
        Employee* e1 = new Employee("ahmed", 123, "zaq12wsx", 5000);
        e1->displayInfo();
    }
    catch (const invalid_argument& e) {
        cout << e.what();
    }
     try {
       
        Admin * admin1 = new Admin("ali kassab", 999, "adminpass00", 7000);
        admin1->displayInfo();
        
    }
     catch (const invalid_argument& e) {
        cout << e.what() << endl;
       
    }
    try {
        Client* K = new Client("Abdulrahman", 548, "hguifokdlxs", 8500);
        Client* ezz = new Client("ezz mohamed", 512, "q3wedrdyt", 1500);
        ezz->displayInfo();
        ezz->deposit(2500);
        cout << "balance after deposit : " << ezz->getBalance() << endl;
        ezz->witharw(1500);
        cout << "balance after withdraw : " << ezz->getBalance() << endl;
        ezz->transferTo(1500, K);
        cout << "balance after transfeing : " << ezz->getBalance() << endl;
        cout << "balance after receiving : " << K->getBalance() << endl;
    }
    catch (const invalid_argument& e) {
        cout<<e.what();
    }
     return 0;
}

