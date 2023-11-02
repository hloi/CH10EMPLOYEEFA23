cmake_minimum_required(VERSION 3.26)
project(CH10EMPLOYEEFA23)

set(CMAKE_CXX_STANDARD 17)

add_executable(CH10EMPLOYEEFA23 main.cpp
        EmployeePerson.cpp
        EmployeePerson.h
        EmployeeManager.cpp
        EmployeeManager.h
        EmployeeStaff.cpp
        EmployeeStaff.h
        Supervisor.cpp
        Supervisor.h)
