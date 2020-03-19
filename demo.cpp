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
#include <vector>

using namespace std;

int main() {

    vector<Person*> persons;

    // DISPLAYUTILITY::displayAllPersonNames(persons, 12);
    // DISPLAYUTILITY::displayAllStudentNames(persons, 190);

    // Person playerOne;
    // playerOne.name = "Ethan";

    vector<int>* courseId = NULL;

    Person::classType type = Person::classType::PER;

    Person playerOne("Ethan", 21, courseId, type);

    playerOne.displayDetails();

    cout << "name = " << playerOne.getName() << endl;
    cout << "courseId = " << playerOne.getCourseId() << endl;

    // switch(playerOne.getClassType()) 
    // {
    //     case(Person::classType::PER):
    //                     cout << "class type = PERSON"  << endl << endl;
    //                     break;
    // }

    Person playerTwo;

    playerTwo.displayDetails();
    
    // switch(playerTwo.getClassType()) {
    //     case(Person::classType::PER):
    //                     cout << "class type = PERSON"  << endl;
    //                     break;
    // }

    cout << "name = " << playerTwo.getName() << endl;
    cout << "courseId = " << playerTwo.getCourseId() << endl;
}