////////////////////////////////////////////////////////////////////////////////
// Main File: DisplayUtility.cpp, demo.cpp
// This File: TeachingAssitant.cpp
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

#ifndef TEACHASSISTANT
#define TEACHASSISTANT

#include "Student.h"
#include "Employee.h"

class TeachingAssistant: public Employee, public Student {

    public:

        TeachingAssistant(string name = "Unknown TA", int ID = -1, vector<int>* courseId = NULL, classType type = TA, vector<float>* grade = NULL, int officeNum = 0, int officeHours = 0, int TAcourse = 0) : 
            name(name), 
            ID(ID),
            type(type),
            grade(grade),
            courseId(courseId),
            officeNum(officeNum),
            officeHours(officeHours),
            TAcourse(TAcourse),
        {}

        void displayDetails();


    private:
        int officeHours;
        int TAcourse;

};

#endif