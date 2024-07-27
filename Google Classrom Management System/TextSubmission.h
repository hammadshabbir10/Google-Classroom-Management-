#ifndef TEXTSUBMISSION_H
#define TEXTSUBMISSION_H

#include <iostream>
#include "Submission.h" // Include the base Submission class header

using namespace std;

class TextSubmission : public Submission {

private:

    string text;

public:
    Assignment textsubmit;
    string Attachedfiles;

    // Constructor
    TextSubmission(string, string, string, string, string, string, Assignment);

    // Destructor
    ~TextSubmission() {};

    // Setter for the text content
    void setText(string t);

    // Getter for the text content
    string getText();

    // Getter for the attached file
    string getAttachedFile() const { return Attachedfiles; }

    // Additional methods for text submission
    void texts();

    // Override the submit method for text submissions
    void submit() override;

    // Compare dates
    bool compareDates(const string& date1, const string& date2);

};

#endif


