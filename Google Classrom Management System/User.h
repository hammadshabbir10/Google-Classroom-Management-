#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

#ifndef USER_H
#define USER_H

class User {

private:


    //Attributes
    
    string Name; 
    string Email; 
    string Role; 
    string Id; 
    string Password;
    string Contact;

public:

    // Constructors
    User();
    User(const string&, const string&, const string&, const string&, const string&, const string&);

    // Destructor
    ~User() {};

    // Setter methods
    void setName(string);      // Setter for the name
    void setEmail(string);     // Setter for the email
    void setRole(string);      // Setter for the role
    void setId(string);        // Setter for the ID
    void setPassword(string);  // Setter for the password
    void setContact(string);   // Setter for the contact

    // Getter methods
    string getName();          // Getter for the name
    string getEmail();         // Getter for the email
    string getRole();          // Getter for the role
    string getId();            // Getter for the ID
    string getPassword();      // Getter for the password
    string getContact();       // Getter for the contact

    // Display user information
    virtual void display() = 0;

    // Encrypt the provided password
    string EncryptPassword(const string& password);

    // Validate if the provided password is valid
    bool isPasswordValid(const string& password);

};

#endif

