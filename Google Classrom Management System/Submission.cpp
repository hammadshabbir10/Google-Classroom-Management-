#include <iostream>
#include "Submission.h"
using namespace std;

//Constructor

Submission::Submission() {

	Submissiondate = ""; 
	Submissiontime = ""; 
	Attachedfiles = ""; 
	Evaluationstatus = "";
	Feedback = "";
	
}	

//Parameterized

Submission::Submission(string submissiondate,string submissiontime, string attachedfile, string evaluationstatus, 
             string feedback,Assignment assignmentsubmit):assignmentsubmit(assignmentsubmit) 
{
	Submissiondate = submissiondate; 
	Submissiontime = submissiontime; 
	Attachedfiles = attachedfile; 
	Evaluationstatus = evaluationstatus;
	Feedback = feedback;
	
}

//Setters

void Submission::setSubmissionDate(string date) {

	this->Submissiondate = date;
}

void Submission::setSubmissionTime(string time) {

	this->Submissiontime = time;
}

void Submission::setAttachedFile(string files) {

	this->Attachedfiles = files;
}

void Submission::setEvaluationStatus(string status) {

	this->Evaluationstatus  = status;
}
	
void Submission::setFeedback(string fb) {

	this->Feedback = fb;
}
	
//Getters

string Submission::getSubmissionDate() {

	return Submissiondate;
}

string Submission::getSubmissionTime() {

	return Submissiontime;
}

string Submission::getAttachedFile() {

	return Attachedfiles;
}

string Submission::getEvaluationStatus() {

	return Evaluationstatus;
}
	
string Submission::getFeedback() {

	return Feedback;
}



