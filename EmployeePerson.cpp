//
// Created by hloi on 10/31/2023.
//

#include <iostream>
#include <string>
#include "EmployeePerson.h"
using namespace std;

// Default constructor. Set protected member variables to the empty string or 0
EmployeePerson::EmployeePerson() {
    fullName       = "";
    departmentCode = "";
    birthday       = "";
    annualSalary   = 0;
}

// ***********************************************************************

// Constructor with parameters to set the private member variables
EmployeePerson::EmployeePerson(string empFullName, string empDepartmentCode,
                               string empBirthday, int empAnnualSalary) {
    SetData(empFullName, empDepartmentCode, empBirthday, empAnnualSalary);
}

// ***********************************************************************

void EmployeePerson::SetData(string empFullName, string empDepartmentCode,
                             string empBirthday, int empAnnualSalary) {
    fullName       = empFullName;
    departmentCode = empDepartmentCode;
    birthday       = empBirthday;
    annualSalary   = empAnnualSalary;
}



bool EmployeePerson::operator==(EmployeePerson &person) {
    return this->fullName == person.fullName;
}

ostream &operator<<(ostream &out, EmployeePerson &person) {
    out << "Name: " << person.fullName << ", Department: " << person.departmentCode
        << ", Birthday: " << person.birthday << ", Salary: " << person.annualSalary;

    return out;
}

const string &EmployeePerson::getFullName() const {
    return fullName;
}
// ***********************************************************************

/*
void EmployeePerson::PrintInfo() {
   cout << "Name: " << fullName << ", Department: " << departmentCode
        << ", Birthday: " << birthday << ", Salary: " << annualSalary;
}
*/

