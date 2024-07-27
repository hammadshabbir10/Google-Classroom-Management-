#ifndef TEACHER_H
#define TEACHER_H

#include "User.h" // Include the base class header

class User; // Forward declaration for the User class

class Teacher : public User {

public:

    // Constructor
    Teacher(const string& name, const string& email, const string& role,
            const string& id, const string& password, const string& contact);

    // Display user information
    void display();

    // Destructor
    ~Teacher() {};

};

#endif


