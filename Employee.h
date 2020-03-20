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
#include <iostream>

using namespace std;


class Employee: public Person {

    public:

        int officeNum;

        Employee();

        Employee(string name, int ID, vector<int>* courseId, classType type, int officeNum);

        /**
         * TODO
         * 
        */
        void displayDetails();

};

#endif