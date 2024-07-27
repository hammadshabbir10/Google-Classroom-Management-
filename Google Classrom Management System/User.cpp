#include <iostream>
#include <fstream>
#include "User.h"
/*
#include "Teacher.cpp"
#include "Student.cpp"
#include "Class.cpp"
#include "Assignment.cpp"
#include "Submission.cpp"
#include "TextSubmission.cpp"
#include "FileSubmission.cpp"
#include "Grade.cpp"
#include "GradeBook.cpp"
#include "FileManagement.cpp"
#include "Notification.cpp"
#include "NotificationThorough.cpp"
#include <string>
#include <ctime>
#include <cstdlib>
*/
//Constructor

User::User(){
	
	Name = ""; 
	Email = ""; 
	Role = ""; 
	Id = ""; 
	Password = "";
	Contact = "";	
	
}	

//Parametrized Constructor

User::User(const string& name,const  string& email,const  string& role,const  string& id,const  string& password,const  string& contact){

	Name = name; 
	Email = email; 
	Role = role; 
	Id = id; 
	Password = password;
	Contact = contact;

}	


//Setters

void User::setName(string n){

	Name = n;	
}

void User::setEmail(string e){

	Email = e;	
}

void User::setRole(string r){
	
	Role = r;
}

void User::setId(string i_d){
	
	Id = i_d;
}

void User::setPassword(string p){

	Password = p;
}
					
void User::setContact(string c){

	Contact = c;
}

//Getters

string User::getName(){

	return Name;	
}

string User::getEmail(){

	return Email;	
}

string User::getRole(){
	
	return Role;
}

string User::getId(){
	
	return Id;
}

string User::getPassword(){

	return Password;
}
					
string User::getContact(){

	return Contact;
}	

//Functions



//New password generator

string User::EncryptPassword(const string& password) {
    
    string encryptedPassword = password;
    char key = 'C';

    for (size_t i = 0; i < encryptedPassword.length(); ++i) {
        encryptedPassword[i] = password[i] ^ key;
    }

    return encryptedPassword;
}


//Validation of Passwords

bool User::isPasswordValid(const string& password) {
  
    bool Uppercase = false;
    bool Digit = false;
    bool yes = false;
    
    if (password.length() >= 8) {
        yes =  true;
    }
    
    else
    {
      yes = false;
      cout << "Weak Password " << endl;
    }  
   
    for (char c : password) {
        
        if (isupper(c)) {
            Uppercase = true;
        }
        if (isdigit(c)) {
            Digit = true;
        }
    }
    
    return yes;
} 
