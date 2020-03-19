////////////////////////////////////////////////////////////////////////////////
// Main File: DisplayUtility.cpp, demo.cpp
// This File: Student.h
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


#ifndef STUDENT
#define STUDENT

#include "Person.h"
#include <iostream>

using namespace std;

class Student: public Person {

    public:

        Student(string name = "Unknown student", int ID = -1, vector<int>* courseId = NULL, classType type = STU, vector<float>* grade = NULL) : 
            name(name), 
            ID(ID),
            type(type),
            courseId(courseId),
            grade(grade),
        {}

        void displayDetails();

    private:

        vector <float>* grade;
        float average;

        void calcAverage();

};

#endif