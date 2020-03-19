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

        // Employee(string name = "Unknown employee", int ID = -1, vector<int>* courseId = NULL, classType type = EMP, int officeNum = 0) : 
        //     name(name), 
        //     ID(ID),
        //     type(type),
        //     courseId(courseId),
        //     officeNum(officeNum),

        int officeNum{0};
        // {}
        Employee() = default;

        Employee(string name = "Unknown employee", int ID = -1, vector<int>* courseId = NULL, classType type = EMP, int officeNum = 0) :
            Person(name, ID, courseId, type),
            officeNum(officeNum)
        {}

        void displayDetails();




};

#endif