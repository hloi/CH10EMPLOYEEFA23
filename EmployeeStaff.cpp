//
// Created by hloi on 10/31/2023.
//

#include <iostream>
#include <string>
#include "EmployeeStaff.h"
using namespace std;

// Default constructor
EmployeeStaff::EmployeeStaff() {
    managerName = "";
}

// ***********************************************************************

// Constructor with parameters
EmployeeStaff::EmployeeStaff(string reportsTo) {
    managerName = reportsTo;
}

// ***********************************************************************

// Get the name of the manager
string EmployeeStaff::GetManagerName() {
    return managerName;
}

// ***********************************************************************

// FIXME: Override the EmployeePerson class' printInfo function with a
// FIXME: printInfo function to print all staff data members.
void EmployeeStaff::PrintInfo() {
    cout << this->fullName << ", " << this->departmentCode << ", " << this->managerName << endl;
}

double EmployeeStaff::calcMonthlySalary() {
    double overtimePay = 0;
    double monthWages = 0;
    if (hoursPerWeek > 40) {
        // add overtime
        overtimePay = (hoursPerWeek - 40) * hourlyRate * 1.5;
        double weeklyPay = 40 * hourlyRate + overtimePay;
        monthWages = weeklyPay * 4;
    }
    else {
        monthWages = hoursPerWeek * hourlyRate * 4;
    }

    return monthWages;
}

EmployeeStaff::EmployeeStaff(string empFullName, string empDepartmentCode, string empBirthday, int empAnnualSalary,
                             double hoursPerWeek, double hourlyRate) : EmployeePerson(empFullName, empDepartmentCode,
                                                                                      empBirthday, empAnnualSalary) {

    this->hoursPerWeek = hoursPerWeek;
    this->hourlyRate = hourlyRate;

}


