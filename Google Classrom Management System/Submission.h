#ifndef SUBMISSION_H
#define SUBMISSION_H

#include <iostream>
#include "Assignment.h" // Include the Assignment class header

using namespace std;

class Submission {

private:

    string Submissiondate;
    string Submissiontime; 
    string Evaluationstatus;
    string Feedback;
    Assignment assignmentsubmit;

public:
    
    string Attachedfiles; 

    // Constructors
    Submission();
    Submission(string, string, string, string, string, Assignment);

    // Destructor
    ~Submission() {};

    // Setter methods
    void setSubmissionDate(string date);       // Setter for the submission date
    void setSubmissionTime(string time);       // Setter for the submission time
    void setAttachedFile(string af);           // Setter for the attached file
    void setEvaluationStatus(string status);   // Setter for the evaluation status	
    void setFeedback(string fb);               // Setter for the feedback

    // Getter methods
    string getSubmissionDate();                // Getter for the submission date
    string getSubmissionTime();                // Getter for the submission time
    string getAttachedFile();                  // Getter for the attached file
    string getEvaluationStatus();              // Getter for the evaluation status
    string getFeedback();                      // Getter for the feedback

    // Virtual function to display submission details
    virtual void submit() {

        cout << "\nSubmission Date: " << Submissiondate << endl;
        cout << "Submission Time: " << Submissiontime << endl;
        cout << "Is Graded: " << Evaluationstatus << endl;
        cout << "Initial Feedback: " << Feedback << endl << endl; 

    }

};

#endif

