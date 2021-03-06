////////////////////////////////////////////////////////////////////////////////
// Main File: DisplayUtility.cpp, demo.cpp
// This File: DisplayUtility.h
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

#ifndef DISPLAYUTILITY
#define DISPLAYUTILITY

#include "Person.h"

/*
 * Display all students that have taken the courseId
*/
void displayAllStudentNames(vector<Person*> v, int courseID);

/*
 * Display all students, TA, and Faculty that are associated with the courseId
*/
void displayAllPersonNames(vector<Person*> v, int courseID);

#endif