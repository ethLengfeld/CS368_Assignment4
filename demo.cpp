////////////////////////////////////////////////////////////////////////////////
// Main File: DisplayUtility.cpp, demo.cpp
// This File: demo.cpp
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

#include <iostream>
#include "DisplayUtility.h"
#include "Person.h"
#include "Employee.h"
#include "Faculty.h"
#include "TeachingAssistant.h"
#include <vector>

using namespace std;

int main() {

    vector<Person*> persons;

    // DISPLAYUTILITY::displayAllPersonNames(persons, 12);
    // DISPLAYUTILITY::displayAllStudentNames(persons, 190);

    // Person playerOne;
    // playerOne.name = "Ethan";

    vector<int>* courseId = nullptr;

    // classType type = PER;


    // Person playerOne("Ethan", 21, courseId, type);
    // playerOne.displayDetails();
    // cout << "name = " << playerOne.getName() << endl;
    // cout << "courseId = " << playerOne.getCourseId() << endl << endl;
    // switch(playerOne.getClassType()) 
    // {
    //     case(Person::classType::PER):
    //                     cout << "class type = PERSON"  << endl << endl;
    //                     break;
    // }
    // cout << endl;

    // Person playerTwo;
    // playerTwo.displayDetails();
    // switch(playerTwo.getClassType()) {
    //     case(Person::classType::PER):
    //                     cout << "class type = PERSON"  << endl;
    //                     break;
    // }
    // cout << "name = " << playerTwo.getName() << endl;
    // cout << "courseId = " << playerTwo.getCourseId() << endl << endl;
    // cout << endl;

    // Employee employee;
    // employee.displayDetails();

    // Faculty(string name,int ID,vector<int>* courseId,classType type,int officeNum,int publications)
    // Faculty f1 = {"Bill, Kerman", 123, courseId, FAC, 5555, 30};
    // f1.displayDetails();
    // classType typeFac = f1.getClassType();
    // if(typeFac == FAC) {
    //     cout << "FAC!!!" << endl;
    // } 

    vector<float>* grade = nullptr;

    TeachingAssistant ta1 = {"Tony, Stark", 111, courseId, TA, grade, 4343, 8, 368};
    ta1.displayDetails();
    classType typeTA = ta1.getClassType();
    if(typeTA == TA) {
        cout << "TA!!!" << endl;
    }

    // Person p1 = new TeachingAssistant{"Tony, Stark", 111, courseId, TA, grade, 4343, 8, 368};
}