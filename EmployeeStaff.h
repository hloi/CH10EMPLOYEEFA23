//
// Created by hloi on 10/31/2023.
//

#ifndef EMPLOYEESTAFF_H
#define EMPLOYEESTAFF_H

#include <string>
#include "EmployeePerson.h"
using namespace std;

class EmployeeStaff : public EmployeePerson {
public:
    EmployeeStaff();
    EmployeeStaff(string empFullName, string empDepartmentCode,
                  string empBirthday, int empAnnualSalary,
                  double hoursPerWeek, double hourlyRate);
    EmployeeStaff(string reportsTo);
    string GetManagerName();
    void PrintInfo() override;
    double calcMonthlySalary() override;

private:
    string managerName;
    double hoursPerWeek;
    double hourlyRate;  // if hours per week is greater 40, hours over 40 will get 1.50 overtime pay.
};

#endif
