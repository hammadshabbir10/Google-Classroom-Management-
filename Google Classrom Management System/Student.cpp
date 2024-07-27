#include<iostream>
#include "Student.h"

using namespace std;

Student::Student(const string& name,const string& email,const string& role,const string& id,const string& password,
         const string& contact):User(name,email,role,id,password,contact){};
       

void Student::assignAssignment(Assignment& assignment) {

        if (numAssignments < MAX_ASSIGNMENTS) {
            assignedAssignments[numAssignments] = &assignment;
            numAssignments++;
        } else {
            cout << "Maximum assignments reached for the student." << endl;
        }
}       

void Student::display(){

	cout << "-------------------------------------------------" << endl << endl;
	cout << "Name: " << getName() << endl;
	cout << "Email: " <<  getEmail() << endl;
	cout << "Role: " << getRole() << endl;
	cout << "ID: " <<  getId() << endl;
	cout << "Password: " << getPassword() << endl;
	cout << "Contact: " << getContact() << endl << endl;
	cout << "-------------------------------------------------" << endl;	
}


