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

class Student: public virtual Person {

    public:

        // constructor for Student class
        Student(string name = "Unknown Student", int ID = -1, vector<int>* courseId = nullptr, classType type = STU, vector<float>* grade = nullptr);

        // deconstructor
        virtual ~Student() = default;

        void displayDetails();

    private:
        // store vector of grades
        vector <float>* grade;
        // store average from grades
        float average;

        // function to calculate average
        void calcAverage();

        // print courses and grades
        void printCoursesAndGrades();

};

#endif