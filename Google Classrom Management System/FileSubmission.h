#ifndef FILESUBMISSION_H
#define FILESUBMISSION_H

#include <iostream>
#include "Submission.h" // Include the base Submission class header

using namespace std;

class FileSubmission : public Submission {

public:
    Assignment filesubmit;

    // Constructor
    FileSubmission(string, string, string, string, string, Assignment);

    // Destructor
    ~FileSubmission() {};

    // Override the submit method for file submissions
    void submit() override;

};

#endif



