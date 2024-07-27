#ifndef STUDENT_H
#define STUDENT_H

#include "User.h"          // Include the base class header
#include "Assignment.h"    // Include the Assignment class header

class Student : public User {

private:

    static const int MAX_ASSIGNMENTS = 5; // Max number of assignments per student
    Assignment* assignedAssignments[MAX_ASSIGNMENTS]; // Array to hold assigned assignments
    int numAssignments; // Number of assignments currently assigned

public: 

    // Constructor
    Student(const string& name, const string& email, const string& role,
            const string& id, const string& password, const string& contact);

    // Destructor
    ~Student() {};

    // Display user information
    void display();

    // Assign an assignment to the student
    void assignAssignment(Assignment& assignment);

};

#endif

