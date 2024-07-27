#include <iostream>
#include "Grade.h"
using namespace std;

Grade::Grade(){


	grade = '\0';
	score = 0;
	ClassAverage = 0;
	feedbackText ="";
}

Grade::Grade(char g, int s,int ClassAvg, string feedback){

	grade = g;
	score = s;
	ClassAverage = ClassAvg;
	feedbackText = feedback;
	
}
		
void Grade::setGrade(char g) {
        
        grade = g;
}

void Grade::setScore(int s) {
        
        score = s;
}

void Grade::setClassAvg(int CA) {

	ClassAverage = CA;
}

void Grade::setFeedback(string feedback) {
    
        feedbackText = feedback;
}

char Grade::getGrade() {
     
        return grade;
}

string Grade::getFeedback() {
      
        return feedbackText;
}

int Grade::getClassAvg() {

	return ClassAverage;
}
	
int Grade::getScore() {
        
        return score;
}


//Calculate the grade of Students & give feedback as well

void Grade::setGradeFromScore(int s) {
    
    score = s;
    if (score >= 90) {
        grade = 'A';
        feedbackText = "Excellent job! Well done.";
    } else if (score >= 80) {
        grade = 'B';
        feedbackText = "Good work! Keep it up.";
    } else if (score >= 70) {
        grade = 'C';
        feedbackText = "Average Work! More Hard-Working.";
    } else if (score >= 60) {
        grade = 'D';
        feedbackText = "Poor!";
    } else {
        grade = 'F';
        feedbackText = "Fail! Need improvement.";
    }
}

void Grade::gradeDetails() {

	cout << "Score: " << getScore() << "/100 "<< endl;
	cout << "Grade: " << getGrade() << endl;
	cout << "Feedback: " << getFeedback() << endl << endl;
	
}	

void Grade::gradeDetails1() {

	cout << "Score: " << getScore() << "/100 " << endl;
	cout << "Grade: " << getGrade() << endl;
	cout << "Feedback: " << getFeedback() << endl << endl;
	
}	
