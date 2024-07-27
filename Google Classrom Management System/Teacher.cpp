#include<iostream>
#include "Teacher.h"
using namespace std;


Teacher::Teacher(const string& name,const string& email,const string& role,const string& id,const string& password,
         const string& contact):User(name,email,role,id, password,contact){};

void Teacher::display(){

	cout << "-------------------------------------------------" << endl << endl;
	cout << "Name: " << getName() << endl;
	cout << "Email: " <<  getEmail() << endl;
	cout << "Role: " << getRole() << endl;
	cout << "ID: " <<  getId() << endl;
	cout << "Password: " << getPassword() << endl;
	cout << "Contact: " << getContact() << endl << endl;
	cout << "-------------------------------------------------" << endl;	
}

       
