////////////////////////////////////////////////////////////////////////////////
// Main File: DisplayUtility.cpp, demo.cpp
// This File: Person.h
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
// Online sources:   https://stackoverflow.com/questions/187640/default-parameters-with-c-constructors
//
////////////////////////////////////////////////////////////////////////////////


#ifndef PERSON
#define PERSON

#include <string>
#include <vector>
#include <iostream>

using namespace std;

/*
 * enum to determine what type of class 
*/
enum classType{
    PER,
    EMP,
    STU,
    FAC,
    TA
};

/*
 * Person class to ast as
 * base class that will be inherited
 * by other classes.
 * 
*/
class Person {

    public:

        // base class Person constructor
        Person(string name = "Unknown person", int ID = -1, vector<int>* courseId = nullptr, classType type = PER);

        // deconstructor
        virtual ~Person() = default;

        /**
         * Display details relevant to class object
         */
        virtual void displayDetails();

        /**
         * return the courses
         * @return vector <int>* - course id
         */
        virtual vector<int>* getCourseId();

        /**
         * return the class type from enum
         * @return classType - type of class
         */
        virtual classType getClassType();

        /**
         * return person's name
         * @return std::string - person's name
         */
        virtual string getName();

        /**
         * return person's id
         * @return int - person's id
         */
        virtual int getID();

    private:
        // person's name
        string name;
        // person's ID
        int ID;
        // the type of class they are
        classType type;
        // vector of courses
        vector<int>* courseId;
};

#endif