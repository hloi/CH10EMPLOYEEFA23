//
// Created by hloi on 10/31/2023.
//



#ifndef EMPLOYEEMANAGER_H
#define EMPLOYEEMANAGER_H

#include <iostream>
#include <string>
#include "EmployeePerson.h"
using namespace std;

class EmployeeManager : public EmployeePerson {
public:
    EmployeeManager() {}
    EmployeeManager(int nManaged);
    int GetNumManaged();
    void PrintInfo() override;
    double calcMonthlySalary() override;
    bool operator==(EmployeeManager& other);
    friend ostream& operator<<(ostream& out, EmployeeManager& person);
private:
    int numManaged;
    double monthlySalary;
};

#endif


