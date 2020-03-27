////////////////////////////////////////////////////////////////////////////////
// Main File: DisplayUtility.cpp, demo.cpp
// This File: Employee.cpp
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
// Online sources:   https://www.learncpp.com/cpp-tutorial/89-class-code-and-header-files/
//
////////////////////////////////////////////////////////////////////////////////

#include "Employee.h"

Employee::Employee(string name, int ID, vector<int>* courseId, classType type, int officeNum) :
        Person{name, ID, courseId, type},
        officeNum{officeNum}
{}

void Employee::displayDetails() {
    cout << "EMPLOYEE" << endl;
    Person::displayDetails();
    cout << "Office number " << Employee::officeNum << endl;
}