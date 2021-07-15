#include <iostream>
#include <string>
using namespace std;

#pragma once

class Student {
public:
	int getStudentID();
	string getFirstName();
	string getLastName();
	string getEmailAddress();
	int getAge();
	int getNumDays();
	string getDegreeProgram();
	
	void setStudentID();
	void setFirstName();
	void setLastName();
	void setEmailAddress();
	void setAge();
	void setNumDays();
	void setDegreeProgram();



private :
	int studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int numDays;
	string degreeProgram;

};