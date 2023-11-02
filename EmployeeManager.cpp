//
// Created by hloi on 10/31/2023.
//

#include "EmployeeManager.h"

double EmployeeManager::calcMonthlySalary() {
    return monthlySalary;
}

void EmployeeManager::PrintInfo() {
    cout << this->fullName << ", " << this->departmentCode << ", " << this->numManaged << endl;
}

EmployeeManager::EmployeeManager(int nManaged) {
    this->numManaged = nManaged;
}

bool EmployeeManager::operator==(EmployeeManager &other) {
    return ((this->fullName == other.fullName) &&
            (this->numManaged == other.numManaged));

}

ostream &operator<<(ostream &out, EmployeeManager &person) {
    out << "Name: " << person.fullName << ", Department: " << person.departmentCode
        << ", Birthday: " << person.birthday << ", Salary: " << person.annualSalary
        << ", " << "Manager";

    return out;
}