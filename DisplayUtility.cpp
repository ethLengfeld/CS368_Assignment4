////////////////////////////////////////////////////////////////////////////////
// Main File: DisplayUtility.cpp, demo.cpp
// This File: DisplayUtility.cpp
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

#include "DisplayUtility.h"
#include <algorithm>

void displayAllStudentNames(vector<Person*> v, int courseID) {

    for (auto student = v.begin(); student != v.end(); student++) {

        if( STU == (*student)->getClassType() ) {

            vector<int>* courses = (*student)->getCourseId();
            if(find( &*courses->begin(), &*courses->end(), courseID) != &*courses->end() ) {
                cout << (*student)->getName() << endl;
            }

        }
        
    }
}

void displayAllPersonNames(vector<Person*> v, int courseID) {

    for (auto person = v.begin(); person != v.end(); person++) {

        vector<int>* courses = (*person)->getCourseId();
        if(find( &*courses->begin(), &*courses->end(), courseID) != &*courses->end() ) {
            cout << (*person)->getName() << endl;
        }
    }
}