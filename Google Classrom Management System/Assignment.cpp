#include <iostream>
#include "Assignment.h"
using namespace std;
//Constructor
	
Assignment::Assignment(){

	Title = "";
	Description = "";
	Deadline = "";
	Attachedfiles = "";
	Pointvalue = 0;
	
}

//Parametrized

Assignment::Assignment(string title, string description, string deadline, string attachedfiles,int  pointvalue){

	this->Title = title;
	this->Description = description;
	this->Deadline = deadline;
	this->Attachedfiles = attachedfiles;
	this->Pointvalue = pointvalue;
	
}

//Setters

void Assignment::setTitle(string t){

	Title = t;
}	

void Assignment::setDescription(string desc){

	Description = desc;
}

void Assignment::setFiles(string files){

	Attachedfiles = files;	
}

void Assignment::setDeadline(string dead){

	Deadline = dead;
}

void Assignment::setPointValue(int pn){

	Pointvalue = pn;
}	



//Getters


string Assignment::getTitle(){

	return Title;
}	

string Assignment::getDescription(){

	return Description;
}

string Assignment::getFiles(){

	return Attachedfiles;	
}
string Assignment::getDeadline(){

	return Deadline;
}

int Assignment::getPointValue(){

	return Pointvalue;
}	

//Details of Assignment

void Assignment::PrintAssignment(){

	cout << "\nTitle: " << Title << endl;
	cout << "Description: " << Description << endl;
	cout << "Files: " << Attachedfiles << endl;
	cout << "Point Value: " << Pointvalue << endl << endl;
	
}			

//AssignmentHead Class

AssignmentHead::AssignmentHead() : numAssign(0) {}

bool AssignmentHead::compareDates(const string& date1, const string& date2) {
  
    int day1 = stoi(date1.substr(0, 2));
    int day2 = stoi(date2.substr(0, 2));

    return day1 > day2;
}

//IF deadline has passed there is no chance to add assignment as well

void AssignmentHead::addAssignment(string date,Assignment& newAssign) {
       
        if (compareDates(newAssign.getDeadline(), date)) {
             cout << "Sorry, cannot add assignment. Deadline has passed." << endl;
             cout << "-------------------------------------------------" << endl;
             cout << "-------------------------------------------------" << endl;
        }
        
        else { 
        
           if (numAssign < MAX_ASSIGNMENTS) {
               assignment[numAssign] = newAssign;
               numAssign++;
           }
        }
}

//If user enter the assingment match that one then that particular assingment is removed 

void AssignmentHead::removeAssignment(const string& assignName) {
       
        for (int i = 0; i < numAssign; ++i) {
            if (assignment[i].getTitle() == assignName) {
                assignment[i] =  assignment[numAssign - 1];
                numAssign--;
                break;
            }
        }
}


//Updated assignment

void AssignmentHead::updateAssignment(const string& assignName, const Assignment& updatedAssign) {
    for (int i = 0; i < numAssign; ++i) {
        if (assignment[i].getTitle() == assignName) {
            assignment[i] = updatedAssign;
            cout << "Assignment updated successfully!" << endl;
            cout << "-------------------------------------------------" << endl;
            cout << "-------------------------------------------------" << endl;
            
            break;
        }
    }
}

void AssignmentHead::displayAllAssignments() {
       
        
        for (int i = 0; i < numAssign; ++i) {
            
            cout << "\nAssignment  Name: " << assignment[i].getTitle() << endl;
            cout << "Description: " << assignment[i].getDescription() << endl;
            cout << "Attach File: " << assignment[i].getFiles() << endl;
            cout << "Point Value: " << assignment[i].getPointValue() << endl << endl;
            cout << "-------------------------------------------------" << endl;
            cout << "-------------------------------------------------" << endl;
        }
}

bool Assignment::isLateSubmission(const string& submissionTime) {
    return submissionTime > Deadline;
}

