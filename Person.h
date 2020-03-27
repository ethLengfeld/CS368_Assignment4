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

/**
 * TODO
 */

#include <string>
#include <vector>
#include <iostream>

using namespace std;

enum classType{
    PER,
    EMP,
    STU,
    FAC,
    TA
};

class Person {

        /**
         * TODO
         */
    public:

        // TODO add comment


        /**
         * TODO
         */
        Person(string name = "Unknown person", int ID = -1, vector<int>* courseId = nullptr, classType type = PER);

        // deconstructor
        virtual ~Person() = default;

        /**
         * TODO
         */
        virtual void displayDetails();

        /**
         * TODO
         * @return vector <int>* - 
         */
        virtual vector<int>* getCourseId();

        /**
         * TODO
         * @return classType -
         */
        virtual classType getClassType();

        /**
         * TODO
         * @return std::string - 
         */
        virtual string getName();

        /**
         * TODO
         * @return int - 
         */
        virtual int getID();

    private:
        string name;
        int ID;
        classType type;
        vector<int>* courseId;

};

#endif