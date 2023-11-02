#include <iostream>
#include <vector>

#include "EmployeePerson.h"
#include "EmployeeManager.h"
#include "EmployeeStaff.h"
#include "Supervisor.h"
using namespace std;

int main() {
    // Create the objects
    EmployeeManager* manager = new EmployeeManager(25);
    EmployeeManager* manager2 = new EmployeeManager(5);
    EmployeeStaff* staff1 = new EmployeeStaff("Bob", "Sales", "02-02-1980", 0, 40, 15);
    EmployeeStaff* staff2 = new EmployeeStaff("Michele", "Sales", "02-02-1980", 0, 40, 15);
    cout << staff1->calcMonthlySalary() << endl;
    // Load data into the objects using the Person class function
    manager->SetData("Michele", "Sales", "03-03-1975", 70000);
    // staff1->SetData ("Bob",     "Sales", "02-02-1980", 50000);

    // Display the objects
    manager->PrintInfo();
    staff1->PrintInfo();

// create multiple manager and staff objects, and then print out their monthly paid.
    vector<EmployeePerson*> listOfEmployees;
    // printout all the employess with monthly paid
    listOfEmployees.push_back(manager);
    listOfEmployees.push_back(staff1);

    for (size_t i=0; i<listOfEmployees.size(); i++) {
        listOfEmployees.at(i)->PrintInfo();

    }

    Supervisor s1;
    s1.calcMonthlySalary();

//    if (*manager == *staff1) {
//        cout << "match" << endl;
//    }

     cout << *manager << endl;

    cout << *staff1 << endl;

    return 0;
}
