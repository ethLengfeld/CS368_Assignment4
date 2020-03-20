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

using namespace std;

Person::Person(string name = "Unknown person", int ID = -1, vector<int>* courseId = NULL, classType type = PER) : 
    name(name), 
    ID(ID),
    type(type),
    courseId(courseId)
{}

void Person::displayDetails() {
    cout << "PERSON " << endl;
    cout << "Name: " << Person::getName() << endl;
    cout << "ID: " << Person::getID() << endl;
    if(Person::getClassType()==Person::classType::PER) {
        cout << "Type: PER" << endl;
    }
}

vector<int>* Person::getCourseId() {
    return courseId;
}

Person::classType Person::getClassType() {
    return type;
}

string Person::getName() {
    return name;
}

int Person::getID() {
    return ID;
}