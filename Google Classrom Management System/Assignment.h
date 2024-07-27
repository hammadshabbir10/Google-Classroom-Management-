#include <iostream>
using namespace std;

#ifndef ASSIGNMENT_H
#define ASSIGNMENT_H

class Assignment {

private:

    string Title;
    string Description; 
    string Deadline;
    string Attachedfiles;
    int Pointvalue;

public:

    // Constructors
    Assignment();
    Assignment(string title, string description, string deadline, string attachedfiles, int pointvalue);

    // Destructor
    ~Assignment() {};

    // Setter methods
    void setTitle(string t);		// Setter for the title
    void setDescription(string desc);	// Setter for the description
    void setFiles(string files);	// Setter for the attached files
    void setDeadline(string dead);	// Setter for the deadline
    void setPointValue(int pn);	// Setter for the point value

    // Getter methods
    string getTitle();        	// Getter for the title
    string getDescription();  	// Getter for the description
    string getFiles();        	// Getter for the attached files
    string getDeadline();     	// Getter for the deadline
    int getPointValue();      	// Getter for the point value

    // Print assignment details
    void PrintAssignment();

    // Check if a submission is late
    bool isLateSubmission(const string& submissionTime);

};

class AssignmentHead : public Assignment {

private:

    static const int MAX_ASSIGNMENTS = 50;
    Assignment assignment[MAX_ASSIGNMENTS];
    int numAssign;

public:
    // Constructor
    AssignmentHead();

    // Add an assignment
    void addAssignment(string dat, Assignment&);

    // Remove an assignment
    void removeAssignment(const string&);

    // Update an assignment
    void updateAssignment(const string& assignName, const Assignment& updatedAssign);

    // Compare dates
    bool compareDates(const string& date1, const string& date2);

    // Display all assignments
    void displayAllAssignments();

};

#endif

