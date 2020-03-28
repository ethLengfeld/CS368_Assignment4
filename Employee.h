////////////////////////////////////////////////////////////////////////////////
// Main File: DisplayUtility.cpp, demo.cpp
// This File: Employee.h
// Other Files: 	 Person.h / Person.cpp / Employee.cpp / Employee.h / 
//                   Student.cpp / Student.h / Faculty.cpp / Faculty.h /
//                   TeachingAssistant.cpp / TeachingAssistant.h / 
//                   DisplayUtility.h / DisplayUtility.cpp / demo.cpp / 
//                   Makefile / README.md
// Semester:         CS 368 Spring 2020
//
// Author:           Ethan Lengfeld
// Email:            elengfeld@wisc.edu
// CS Login:         lengfeld
//
//
// Online sources:   
//
////////////////////////////////////////////////////////////////////////////////

#ifndef EMPLOYEE
#define EMPLOYEE

#include "Person.h"


class Employee: public virtual Person {

    public:

        // constrctor for Employee class
        Employee(string name = "Unknown employee", int ID = -1, vector<int>* courseId = nullptr, classType type = EMP, int officeNum = 0);

        // deconstructor
        virtual ~Employee() = default;

        virtual void displayDetails();

    protected:
        // store office number
        int officeNum;

};

#endif