////////////////////////////////////////////////////////////////////////////////
// Main File: DisplayUtility.cpp, demo.cpp
// This File: TeacingAssitant.cpp
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

#include "TeachingAssistant.h"

TeachingAssistant::TeachingAssistant(string name, int ID, vector<int>* courseId, 
                    classType type, vector<float>* grade, int officeNum, int officeHours, int TAcourse) : 
    Person{name, ID , courseId, type},
    Employee{name,ID,courseId,type,officeNum},
    Student{name,ID,courseId,type,grade},
    officeHours{officeHours},
    TAcourse{TAcourse}
{}

void TeachingAssistant::displayDetails() {
    Student::displayDetails();
    cout << "Office number " << Employee::officeNum << endl;
    cout << "Course TA: " << TeachingAssistant::TAcourse << endl;
    cout << "Office hours: " << TeachingAssistant::officeHours << endl;
}