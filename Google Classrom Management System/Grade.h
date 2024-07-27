#ifndef GRADE_H
#define GRADE_H

#include <iostream>
using namespace std;

class Grade {

private:

    char grade;
    int score;
    string feedbackText;
    int ClassAverage;

public:

    // Constructors
    Grade();
    Grade(char, int, int, string);

    // Destructor
    ~Grade() {};

    // Setter methods
    void setGrade(char);           // Setter for the grade
    void setScore(int);            // Setter for the score
    void setClassAvg(int CA);      // Setter for the class average
    void setFeedback(string);      // Setter for the feedback

    // Getter methods
    char getGrade();               // Getter for the grade
    int getScore();                // Getter for the score
    int getClassAvg();             // Getter for the class average
    string getFeedback();          // Getter for the feedback

    // Set grade based on the score
    void setGradeFromScore(int);

    // Display grade details
    void gradeDetails();
    void gradeDetails1();

};

#endif

