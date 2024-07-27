#include <iostream>
#include <fstream>
#include <string>
#include "FileManagement.h"
using namespace std;

//Constructors

FileManagement::FileManagement(){

	limit = 0;
	filesize = 0;
}


//Parameterized Constructor

FileManagement::FileManagement(int l, int s) {

	limit = l;
	filesize = s;	
}	 

//Setters

void FileManagement::setSize(int s) {

	filesize = s;
	
}

void FileManagement::setLimit(int l) {

	limit = l;
	
}	
	

//Getters	 

int FileManagement::getSize() {

	return filesize;
}	

int FileManagement::getLimit() {

	return limit;
}	


//Functions

void FileManagement::uploadFile(const char* fileName, const char* content) {
        
        ofstream outFile(fileName);
        
        if (outFile) {
            outFile << content;
            outFile.close();
            cout << "File uploaded successfully." << endl;
        } 
        else {
            
            cout << "Error uploading file." << endl;
        }
}

bool FileManagement::deleteFile(const char* fileName) {
 
        if (remove(fileName) == 0) {
            
            cout << "File deleted successfully." << endl;
            return true;
        } 
        else {
            
            cout << "Error deleting file." << endl;
            return false;
        }
}


void FileManagement::FilesDetails(){

	cout << "Current File Limit " << limit << endl;
	cout << "Current File Size " << filesize << endl; 
}	 
