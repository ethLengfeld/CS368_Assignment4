////////////////////////////////////////////////////////////////////////////////
// Main File: DisplayUtility.cpp, demo.cpp
// This File: Faculty.cpp
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

#include "Faculty.h"

Faculty::Faculty(string name,int ID,vector<int>* courseId,classType type,int officeNum,int publications) :
    Person{name,ID,courseId,type},
    Employee{name,ID,courseId,type,officeNum},
    publications{publications}
{}

void Faculty::displayDetails() {
    cout << "Faculty" << endl;
    Employee::displayDetails();
    printCourses();
    cout << "Number of publications: " << Faculty::publications << endl;
}

void Faculty::printCourses() {
    cout << "Courses taught: ";
    auto currCourse = (*Person::getCourseId()).begin();
    while(currCourse != (*Person::getCourseId()).end()) {
        cout << *currCourse << " ";
        currCourse++;
    }
    cout << endl;
}