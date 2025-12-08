

#include <iostream>
#include "Employee.h"
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
}

