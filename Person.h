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
        // string name{"Unknown person"};
        // int ID{-1};
        // classType type{PER};
        // vector<int>* courseId{NULL};


        // Person(string name = "Unknown person", int ID = -1, vector<int>* courseId = NULL, classType type = PER) : 
        //     name(name), 
        //     ID(ID),
        //     type(type),
        //     courseId(courseId)
        // {}

        Person(string name, int ID, vector<int>* courseId, classType type) : 
            name(name), 
            ID(ID),
            type(type),
            courseId(courseId)
        {}

        // deconstructor
        ~Person();

        /**
         * TODO
         */
        void displayDetails();

        /**
         * TODO
         * @return vector <int>* - 
         */
        vector <int>* getCourseId();

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