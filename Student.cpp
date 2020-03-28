////////////////////////////////////////////////////////////////////////////////
// Main File: DisplayUtility.cpp, demo.cpp
// This File: Student.cpp
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

#include "Student.h"

Student::Student(string name, int ID, vector<int>* courseId, classType type, vector<float>* grade) : 
    Person(name, ID, courseId, type)
    {
        Student::grade = grade;
        calcAverage();
    }

void Student::displayDetails() {
    if(Person::getClassType() == STU) {
        cout << "Student" << endl;
    } else if(Person::getClassType() == TA){
        cout << "TA" << endl;
    }
    Person::displayDetails();
    cout << "Courses and grades: ";
    printCoursesAndGrades();
    cout << "Average: " << Student::average << endl;
}

void Student::calcAverage() {
    auto currTotal = 0;
    for (auto &currGrade : *Student::grade) {
        currTotal += currGrade;
    }
    Student::average = (currTotal / (*Student::grade).size());
}

void Student::printCoursesAndGrades() {
    auto currCourse = (*Person::getCourseId()).begin();
    auto currGrade = (*Student::grade).begin();

    while(currCourse != (*Person::getCourseId()).end()) {
        cout << *currCourse << ":" << *currGrade << " ";
        currCourse++;
        currGrade++;
    }
    cout << endl;
}