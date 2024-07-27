#ifndef FILEMANAGEMENT_H
#define FILEMANAGEMENT_H

#include <iostream>
using namespace std;

class FileManagement {

private:

    int filesize;
    int limit;

public:

    // Constructors
    FileManagement();
    FileManagement(int, int);

    // Destructor
    ~FileManagement() {};

    // Setter methods
    void setSize(int);    // Setter for the file size
    void setLimit(int);   // Setter for the limit

    // Getter methods
    int getSize();        // Getter for the file size
    int getLimit();       // Getter for the limit

    // Upload a file with content
    void uploadFile(const char* fileName, const char* content);

    // Delete a file
    bool deleteFile(const char* fileName); 

    // Display file details
    void FilesDetails();

};

#endif

