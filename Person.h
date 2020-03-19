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

using namespace std;

class Person {

        /**
         * TODO
         */
    public:

        // TODO add comment
        enum classType {
            PER,
            EMP,
            STU,
            FAC,
            TA
        };

        /**
         * TODO
         */
        Person() = default;

        Person(string name, int ID, vector<int>* courseId, classType type);

        // deconstructor
       // ~Person();

        /**
         * TODO
         */
        virtual void displayDetails();

        /**
         * TODO
         * @return vector <int>* - 
         */
        vector<int>* getCourseId();

        /**
         * TODO
         * @return classType -
         */
        classType getClassType();

        /**
         * TODO
         * @return std::string - 
         */
        string getName();

    private:

        string name{"Unknown person"};
        int ID{-1};
        classType type{PER};
        vector<int>* courseId{NULL};

};

#endif