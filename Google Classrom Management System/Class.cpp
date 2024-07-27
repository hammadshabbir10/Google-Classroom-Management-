#include <iostream>
#include "Class.h"

using namespace std;

//const int Class::Max_Students = 50;

Class::Class(){

	class_Name = "";
	Subject = "";
	Description = ""; 
	Enrolled_Students  = 0;
	teacher = nullptr;
	for (int i = 0; i < MAX_Students; i++) {
          student[i] = nullptr;
       }
	
}



Class::Class(const string& classname,const string& subject,const string& description,int students):
       class_Name(classname),Subject(subject),Description(description),Enrolled_Students(students){};
	
//Setters
		
void Class::setClassName(string& CN) {
        
	class_Name = CN;
}

void Class::setSubject(string& subj) {
        
        Subject = subj;
}


void Class::setDescription(string& desc)  {
 
        Description = desc;
}


void Class::setEnrolledStudent(int stud) {
 
        Enrolled_Students = stud;
}

void Class::setTeacher(Teacher& teacher) {
        
        this->teacher = &teacher;
}
	

// Getters
    
string& Class::getClassName() {
  
        return class_Name;
}

string& Class::getSubject() {
 
        return Subject;
}

string& Class::getDescription() {
   
        return Description;
}

int Class::getEnrolledStudent() {

        return Enrolled_Students;
}

Teacher& Class::getTeacher() {
  
        return *teacher;
}   

Student** Class::getEnrolledStudents() {
     
        return student;
}	

//Functions
	
void Class::addStudent(const Student& stud){

	if(Enrolled_Students < MAX_Students){
	   student[Enrolled_Students] = new Student(stud);
	   Enrolled_Students++;
	
	}

}	

void Class::removeStudent(const string& studentName) {
        
        for (int i = 0; i < Enrolled_Students; ++i) {
            
            if (student[i] != nullptr && student[i]->getName() == studentName) {
            
                delete student[i];
                student[i] = nullptr;
                --Enrolled_Students;
                break;
                
            }
        }
    
}   


//Class Details

void Class::display(){
	
    	cout << "\nClass Name: " << class_Name << endl;
    	cout << "Subject: " << Subject << endl;
    	cout << "Description: " << Description << endl;
    	cout << "Enrolled Students: " << Enrolled_Students << endl << endl;
        cout << "-------------------------------------------------" << endl;
        cout << "-------------------------------------------------" << endl;
    	
}

void Class::displayA(){
	
    	cout << "\nClass Name: " << class_Name << endl;
    	cout << "Subject: " << Subject << endl;
    	cout << "Description: " << Description << endl;
    	cout << "Enrolled Students: " << Enrolled_Students << endl;
    	cout << "\nTeacher: " << teacher->getName() << endl;
	cout << "Enrolled Students:" << endl;
        
        for (int i = 0; i < Enrolled_Students; ++i) {
             cout << "Student " << i + 1 << ": " << student[i]->getName() << endl;
             
        }
       cout << endl;
}
   
//Class Management class   
    
ClassManagement::ClassManagement() : numClasses(0) {}

void ClassManagement::addClass(const Class& newClass) {
        
        if (numClasses < MAX_CLASSES) {
            classes[numClasses] = newClass;
            numClasses++;
        }
}

//Remove Classes

void ClassManagement::removeClass(const string& className) {
       
        for (int i = 0; i < numClasses; ++i) {
            if (classes[i].getClassName() == className) {
                classes[i] = classes[numClasses - 1];
                numClasses--;
                break;
            }
        }
}

// Other functions for updating and displaying class details can be added here

void ClassManagement::displayAllClasses() {
       
        
        for (int i = 0; i < numClasses; ++i) {
            
            cout << "\nClass Name: " << classes[i].getClassName() << endl;
            cout << "Subject: " << classes[i].getSubject() << endl;
            Teacher& teacher = classes[i].getTeacher();
            cout << "Teacher Name: " << teacher.getName() << endl;
            cout << "Description: " << classes[i].getDescription() << endl << endl;
            cout << "-------------------------------------------------" << endl;
            cout << "-------------------------------------------------" << endl;
        }
}
   
	
