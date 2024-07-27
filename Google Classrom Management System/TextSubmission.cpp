#include <iostream>
#include "TextSubmission.h"
using namespace std;
	
//Text Submission

TextSubmission::TextSubmission(string submissiondate,string submissiontime, string attachedfile, string evaluationstatus, 
             string feedback,string t,Assignment assignmentsubmit):Submission(submissiondate,submissiontime,attachedfile,
             evaluationstatus,feedback,assignmentsubmit){
                 
                    text = t;
                    textsubmit = assignmentsubmit;
}

//Display of Assignmetn Text

void TextSubmission::texts(){
        
        cout << "Assignment  Text: " << getText() << endl;      
	
}

//IF deadline has passed then there is no chance to submit the text of Assingment

void TextSubmission::submit(){
        
 	
 	if(getSubmissionDate() < textsubmit.getDeadline()) {
	
	   cout << "Text Submission Successfully! " << endl;
	   
	}
	
	else {
	
	   cout << "Late Submission :( " << endl;
	}
	
}
	      	
void TextSubmission::setText(string t){

	text = t;
}
	
string TextSubmission::getText(){

	return text;
}	

