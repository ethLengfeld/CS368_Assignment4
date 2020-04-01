# Ethan Lengfeld
# Makefile to compile Assignment 4 - Department Database code

CXX=g++
CXXFLAGS = -Wall
EXE = DemoDepartmentDatabase

all: demo.o DisplayUtility.o Person.o Employee.o Faculty.o Student.o TeachingAssistant.o
	$(CXX) $(CXXFLAGS) -o $(EXE) demo.o DisplayUtility.o Person.o Employee.o Faculty.o Student.o TeachingAssistant.o

demo.o: demo.cpp DisplayUtility.o Person.o Employee.o Faculty.o Student.o TeachingAssistant.o Faculty.o
	$(CXX) $(CXXFLAGS) -c demo.cpp

DisplayUtility.o: TeachingAssistant.o Faculty.o Student.o Employee.o Person.o DisplayUtility.h DisplayUtility.cpp
	$(CXX) $(CXXFLAGS) -c DisplayUtility.cpp

TeachingAssistant.o: Employee.h Student.h TeachingAssistant.cpp TeachingAssistant.h
	$(CXX) $(CXXFLAGS) -c TeachingAssistant.cpp

Faculty.o: Employee.h Faculty.cpp Faculty.h
	$(CXX) $(CXXFLAGS) -c Faculty.cpp

Student.o: Person.h Student.cpp Student.h
	$(CXX) $(CXXFLAGS) -c Student.cpp

Employee.o: Person.h Employee.cpp Employee.h
	$(CXX) $(CXXFLAGS) -c Employee.cpp

Person.o: Person.cpp Person.h
	$(CXX) $(CXXFLAGS) -c Person.cpp

clean:
# swap in rm for del if linux
#	-rm demo.o
	-del demo.o
	-del Person.o
	-del Employee.o
	-del Student.o
	-del Faculty.o
	-del TeachingAssistant.o
	-del DisplayUtility.o
	-del DemoDepartmentDatabase.exe
