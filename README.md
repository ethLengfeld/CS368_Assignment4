Author: Ethan Lengfeld
README file for Assignment 4


# Assignment 4: Department Database
The files in Assignment 4 consist of demo.cpp which is used as a test class to demo all methods defined
within Person, Student, Employee, TeachingAssistant, Faculty, DisplayUtility header files and developed in Person, Student, Employee, TeachingAssistant, Faculty, DisplayUtility C++ source files.

## To Compile and Run Program
1. To run the program add all files to the any same directory.
2. Navigate to the directory location and type the command 'make'
3. This will create an executable called 'DemoDepartmentDatabase'
4. Type 'DemoDepartmentDatabase' in command line and the program will execute.


## To Clean Program on Windows
To remove executable and any .o files run the command 'make clean'
Warning! This will delete the executable and will require rerunning 'make' to retest it

## To Clean Program on Linux
Edit all 'del' to 'rm' under clean rule in Makefile
To remove executable and any .o files run the command 'make clean'
Warning! This will delete the executable and will require rerunning 'make' to retest it

## Code Organization
Person is the base class
Employee and Student inherit from Person class
