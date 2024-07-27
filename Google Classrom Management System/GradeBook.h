#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <iostream>
#include "Grade.h" // Include the Grade class header

using namespace std;

class GradeBook : public Grade {

private:

    char CumulativeGrade;
    int CreditHour;
    int ClassAverage;
    int Weightage;
    string feedbackText;
    double Gpa;

public:
    Grade studentgrade;

    // Constructors
    GradeBook();
    GradeBook(Grade& g, char, int, int, int, double);

    // Destructor
    ~GradeBook() {};

    // Setter methods
    void setCumulativeGrade(char CG);     // Setter for the cumulative grade
    void setCreditHour(int CH);           // Setter for the credit hour
    void setClassAvg(int CA);             // Setter for the class average
    void setWeightage(int W);             // Setter for the weightage
    void setGPA(double);                  // Setter for the GPA

    // Getter methods
    char getCumulativeGrade();            // Getter for the cumulative grade
    int getCreditHour();                  // Getter for the credit hour
    int getClassAvg();                    // Getter for the class average
    int getWeightage();                   // Getter for the weightage
    double getGPA();                      // Getter for the GPA

    // Additional methods
    void GradeBookDetails();
    void CalulateCumulativeGrade(int);
    void CalulateClassAverage(int, int, int, int);

};

#endif
	
