//
// Created by hloi on 10/31/2023.
//


#ifndef EMPLOYEEPERSON_H
#define EMPLOYEEPERSON_H
#include <iostream>
#include <string>
using namespace std;

class EmployeePerson { // abstract class
public:
    EmployeePerson();
    EmployeePerson(string empFullName, string empDepartmentCode,
                   string empBirthday, int empAnnualSalary);
    void SetData(string empFullName, string empDepartmentCode,
                 string empBirthday, int empAnnualSalary);
    virtual void PrintInfo() = 0;
    virtual double calcMonthlySalary() = 0; //pure abstract function
    virtual bool operator==(EmployeePerson& person);

    friend ostream& operator<<(ostream& out, EmployeePerson& person);
    const string &getFullName() const;

protected:
    string fullName;

protected:
    // Format: last name, first name
    string departmentCode;
    string birthday;
    int annualSalary;
};
#endif
