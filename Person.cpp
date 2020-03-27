////////////////////////////////////////////////////////////////////////////////
// Main File: DisplayUtility.cpp, demo.cpp
// This File: Person.cpp
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

#include "Person.h"
#include <string>
#include <vector>
#include <iostream>

Person::Person(string name, int ID, vector<int>* courseId, classType type) : 
    name(name), 
    ID(ID),
    type(type),
    courseId(courseId)
{}

void Person::displayDetails() {
    cout << "Name: " << Person::getName() << endl;
    cout << "ID: " << Person::getID() << endl;
}

vector<int>* Person::getCourseId() {
    return courseId;
}

classType Person::getClassType() {
    return type;
}

string Person::getName() {
    return name;
}

int Person::getID() {
    return ID;
}