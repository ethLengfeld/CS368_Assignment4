# Ethan Lengfeld
# 9074020836
# Makefile to compile Assignment 4 - Department Database code

CXX=g++
CXXFLAGS = -Wall
EXE = DemoDepartmentDatabase

all: demo.o DisplayUtility.o Person.o
	$(CXX) $(CXXFLAGS) -o $(EXE) demo.o DisplayUtility.o Person.o

demo.o: demo.cpp DisplayUtility.o Person.o
	$(CXX) $(CXXFLAGS) -c demo.cpp

DisplayUtility.o: TeachingAssistant.o Faculty.o Student.o Employee.o Person.o DisplayUtility.h DisplayUtility.cpp
	$(CXX) $(CXXFLAGS) -c DisplayUtility.cpp

TeachingAssistant.o: Employee.h Student.h TeachingAssistant.cpp TeachingAssistant.cpp TeachingAssistant.h
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
# add in rm for linux
	-del demo.o
	-del Person.o
	-del Employee.o
	-del Student.o
	-del Faculty.o
	-del TeachingAssistant.o
	-del DisplayUtility.o
#	-rm DemoDepartmentDatabase
	-del DemoDepartmentDatabase.exe