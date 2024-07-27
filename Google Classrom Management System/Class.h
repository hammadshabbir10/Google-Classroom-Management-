#ifndef CLASS_H
#define CLASS_H

#include <string>
#include "Student.h" // Include the Student class header
#include "Teacher.h" // Include the Teacher class header

class Teacher; // Forward declaration for the Teacher class

class Class {

private:

    string class_Name;
    string Subject;
    string Description; 
    int Enrolled_Students;
    static const int MAX_Students = 50;
    Teacher* teacher;
    Student* student[MAX_Students];

public:
    
    // Constructors
    Class();
    Class(const string& classname, const string& subject, const string& description, int students);

    // Destructor
    ~Class() {};

    // Setter methods
    void setClassName(string& CN);	   	// Setter for the class name
    void setSubject(string& subj);    	// Setter for the subject
    void setDescription(string& desc);	// Setter for the description
    void setEnrolledStudent(int stud);	// Setter for the enrolled students
    void setTeacher(Teacher& teacher);	// Setter for the teacher

    // Getter methods
    string& getClassName();           	// Getter for the class name
    string& getSubject();             	// Getter for the subject
    string& getDescription();         	// Getter for the description
    int getEnrolledStudent();         	// Getter for the enrolled students
    Teacher& getTeacher();            	// Getter for the teacher
    Student** getEnrolledStudents();  	// Getter for the enrolled students array

    // Add a student to the class
    void addStudent(const Student& stud);

    // Remove a student from the class
    void removeStudent(const string& studentName);

    // Display class information
    void display();
    void displayA();

};

class ClassManagement : public Class {

private:
    
    static const int MAX_CLASSES = 50;
    Class classes[MAX_CLASSES];
    int numClasses;

public:
    
    // Constructor
    ClassManagement();

    // Add a class to the management system
    void addClass(const Class& newClass);

    // Remove a class from the management system
    void removeClass(const string& className);

    // Display all classes
    void displayAllClasses();
   
};

#endif

