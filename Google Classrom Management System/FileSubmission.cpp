#include <iostream>
#include "FileSubmission.h"
using namespace std;


//File Submission

FileSubmission::FileSubmission(string submissiondate,string submissiontime, string attachedfile, string evaluationstatus, string feedback,
                 Assignment assignmentsubmit):Submission(submissiondate, submissiontime,attachedfile,evaluationstatus,feedback,
                 assignmentsubmit){
                 
                 filesubmit = assignmentsubmit;
}

//IF deadline has passed then there is no chance to submit the file

void FileSubmission::submit(){

	if(getSubmissionDate() < filesubmit.getDeadline() ){
	
	   cout << "File Submission Successfully! " << endl;
	   
	}
	
	else {
	
	   cout << "Late Submission :( "  << endl;
	}
	
}	      	
	
