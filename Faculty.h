////////////////////////////////////////////////////////////////////////////////
// Main File: DisplayUtility.cpp, demo.cpp
// This File: Faculty.h
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

#ifndef FACULTY
#define FACULTY

#include "Employee.h"

class Faculty: public Employee {

       public:

        Faculty(string name = "Unknown faculty", int ID = -1, vector<int>* courseId = NULL, classType type = FAC, int officeNum = 0, int publications = 0) : 
            name(name), 
            ID(ID),
            type(type),
            officeNum(officeNum),
            publications(publications),
        {}

        void displayDetails();

    private:

        int publications;

};

#endif