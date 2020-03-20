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

Employee::Employee():
        Person("Unknown employee",-1,NULL,EMP)
        {
            officeNum = 0;
        }

Employee::Employee(string name = "Unknown employee", int ID = -1, vector<int>* courseId = NULL, classType type = EMP, int officeNum = 0) :
            Person(name, ID, courseId, type)
        {
            officeNum = officeNum;
        }


void Employee::displayDetails() {
    cout << "EMPLOYEE" << endl;
    cout << "Name: " << Person::getName() << endl;
    cout << "ID: " << Person::getID() << endl;
    if(Person::getClassType()==Person::classType::EMP) {
        cout << "Type: EMP" << endl;
    }
    cout << "Office number " << officeNum << endl;
}