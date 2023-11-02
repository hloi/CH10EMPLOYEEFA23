//
// Created by hloi on 11/2/2023.
//

#ifndef CH10EMPLOYEEFA23_SUPERVISOR_H
#define CH10EMPLOYEEFA23_SUPERVISOR_H

#include "EmployeeManager.h"
#include "EmployeeStaff.h"


class Supervisor : public EmployeeStaff, public EmployeeManager {
public:
    Supervisor() : EmployeeManager(), EmployeeStaff() {}
    double calcMonthlySalary() override;
private:

};


#endif //CH10EMPLOYEEFA23_SUPERVISOR_H
