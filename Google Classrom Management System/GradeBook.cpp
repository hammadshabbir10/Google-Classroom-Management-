#include<iostream>
#include "GradeBook.h"
#include "Grade.h"
using namespace std;


GradeBook::GradeBook() {

	CumulativeGrade = 'S';
	CreditHour = 7;
	ClassAverage = 0;
	Weightage = 10;
}
	
GradeBook::GradeBook(Grade&g,char CG,int CH,int CA ,int W,double gpa) {

	CumulativeGrade = CG;
	CreditHour = CH;
	ClassAverage = CA;
	Weightage = W;
	Gpa = gpa;
}
	
void GradeBook::setCumulativeGrade(char CG) {
 
	CumulativeGrade = CG;
}
	
	
void GradeBook::setCreditHour(int CH) {

	CreditHour = CH;
}
	
void GradeBook::setClassAvg(int CA) {

	ClassAverage = CA;
}
	
void GradeBook::setWeightage(int W) {

	Weightage = W;	
}

void GradeBook::setGPA(double gpa) {

	Gpa = gpa;
}
		
char GradeBook::getCumulativeGrade() {

	return CreditHour;
}	

int GradeBook::getCreditHour() {

	return CreditHour;
}
	 
int GradeBook::getClassAvg() {

	return ClassAverage;
}
	
int GradeBook::getWeightage() {

	return Weightage;
}

double GradeBook::getGPA() {

	return Gpa;
}
void GradeBook::GradeBookDetails(){

	cout << "\nCumulative Grade: " << CumulativeGrade << endl;
	cout << "Credit Hour: " << CreditHour << endl;
	cout << "Class Average: " << ClassAverage << endl;
	cout << "Weightage: " << Weightage << endl << endl;
	
}


//Calculate new Grade & Gpa & Feeedback

void GradeBook::CalulateCumulativeGrade(int s){
	
	int Scoore = s;
	int Totalscore = s;//= ((Scoore + Scoore)/200) *10;
	double Gpas = 0.0;
	
	if (Totalscore >= 90) {
           CumulativeGrade = 'A';
           studentgrade.setScore(Totalscore );
           Gpas = (4.0*4 + 4.0*3)/getCreditHour();
           setGPA(Gpas);
           studentgrade.setFeedback("Excellent job! Well done.");
        } 
        else if (Totalscore >= 80) {
           CumulativeGrade = 'B';
           studentgrade.setScore(Totalscore );
           Gpas = (3.0*4 + 3.0*3)/getCreditHour();
           setGPA(Gpas);
           studentgrade.setFeedback("Good work! Keep it up.");
        } 
        else if (Totalscore >= 70) {
           CumulativeGrade = 'C';
           studentgrade.setScore(Totalscore);
           Gpas = (2.0*4 + 2.0*3)/getCreditHour();
           setGPA(Gpas);
           studentgrade.setFeedback("Average Work! More Hard-Working.");
        } 
        else if (Totalscore >= 60) {
           CumulativeGrade = 'D';
           studentgrade.setScore(Totalscore );
           Gpas = ((1.0*4) + (1.0*3))/getCreditHour();
           setGPA(Gpas);
           studentgrade.setFeedback("Poor!");
        } 
        else {
           
           CumulativeGrade = 'F';
           studentgrade.setScore(Totalscore);
           setGPA(0);
           studentgrade.setFeedback("Fail! Need improvement.");
        }
         
         studentgrade.setGrade(CumulativeGrade);
        
         
	
	
}	
	 	
void GradeBook::CalulateClassAverage(int s1,int s2,int s3,int s4) {

	int classAverage =  0;
	
	classAverage = (s1 + s2 +s3 + s4)/4;
	
	setClassAvg(classAverage);
	
}	







	
