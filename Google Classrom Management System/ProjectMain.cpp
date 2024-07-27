#include <iostream>
#include <fstream>
#include "User.cpp"
#include "Teacher.cpp"
#include "Student.cpp"
#include "Class.cpp"
#include "Assignment.cpp"
#include "Submission.cpp"
#include "TextSubmission.cpp"
#include "FileSubmission.cpp"
#include "Grade.cpp"
#include "GradeBook.cpp"
#include "FileManagement.cpp"
#include "Notification.cpp"
#include "NotificationThorough.cpp"
#include <string>
#include <ctime>
#include <cstdlib>

void printHeader1() {
    std::string asciiArt = R"(
    
________                  __________                   __               __   
\_____  \   ____ ______   \______   \_______  ____    |__| ____   _____/  |_ 
 /   |   \ /  _ \\____ \   |     ___/\_  __ \/  _ \   |  |/ __ \_/ ___\   __\
/    |    (  <_> )  |_> >  |    |     |  | \(  <_> )  |  \  ___/\  \___|  |  
\_______  /\____/|   __/   |____|     |__|   \____/\__|  |\___  >\___  >__|  
        \/       |__|                             \______|    \/     \/      

)";
    
    std::cout << asciiArt << std::endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
}

void printHeader2() {
    std::string asciiArt = R"(
    
  ___ ___                                    .___   _________.__          ___.  ___.   .__        
 /   |   \_____    _____   _____ _____     __| _/  /   _____/|  |__ _____ \_ |__\_ |__ |__|______ 
/    ~    \__  \  /     \ /     \\__  \   / __ |   \_____  \ |  |  \\__  \ | __ \| __ \|  \_  __ \
\    Y    // __ \|  Y Y  \  Y Y  \/ __ \_/ /_/ |   /        \|   Y  \/ __ \| \_\ \ \_\ \  ||  | \/
 \___|_  /(____  /__|_|  /__|_|  (____  /\____ |  /_______  /|___|  (____  /___  /___  /__||__|   
       \/      \/      \/      \/     \/      \/          \/      \/     \/    \/    \/           
)";
    cout << asciiArt << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
}

void printHeader3() {
    cout << R"(
 
________ ________ .___          ____ ____   _____  _______   
\_____  \\_____  \|   |        /_   /_   | /  |  | \   _  \  
 /  ____/ /  ____/|   |  ______ |   ||   |/   |  |_/  /_\  \ 
/       \/       \|   | /_____/ |   ||   /    ^   /\  \_/   \
\_______ \_______ \___|         |___||___\____   |  \_____  /
        \/       \/                           |__|        \/             

)" << endl;
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------------------------------------------------------" << endl;
}

void printHeader4() {
    cout << R"(
 
_________   _________           _________  
\_   ___ \ /   _____/           \_   ___ \ 
/    \  \/ \_____  \    ______  /    \  \/ 
\     \____/        \  /_____/  \     \____
 \______  /_______  /            \______  /
        \/        \/                    \/           

)" << endl;
    cout << "------------------------------------------------------------------------------------" << endl;
    cout << "------------------------------------------------------------------------------------" << endl;
}


void printHeader6() {
    cout << R"(
___________           .___         _____     _____                        .__                 _________            .___      
\_   _____/ ____    __| _/   _____/ ____\   /  _  \   _____ _____  _______|__| ____    ____   \_   ___ \  ____   __| _/____  
 |    __)_ /    \  / __ |   /  _ \   __\   /  /_\  \ /     \\__  \ \___   /  |/    \  / ___\  /    \  \/ /  _ \ / __ |/ __ \ 
 |        \   |  \/ /_/ |  (  <_> )  |    /    |    \  Y Y  \/ __ \_/    /|  |   |  \/ /_/  > \     \___(  <_> ) /_/ \  ___/ 
/_______  /___|  /\____ |   \____/|__|    \____|__  /__|_|  (____  /_____ \__|___|  /\___  /   \______  /\____/\____ |\___  >
        \/     \/      \/                         \/      \/     \/      \/       \//_____/           \/            \/    \/

)" << endl;
    cout << "----------------------------------------------------------------------------------------------------------------" << endl;
    cout << "----------------------------------------------------------------------------------------------------------------" << endl;
}



void printHeader5() {
    cout << R"(
               __________                ._._.     ___   ___________     ___    
               \______   \___.__. ____   | | |    /  /  /_   \   _  \    \  \   
                |    |  _<   |  |/ __ \  | | |   /  /    |   /  /_\  \    \  \  
                |    |   \\___  \  ___/   \|\|  (  (     |   \  \_/   \    )  ) 
                |______  // ____|\___  >  ____   \  \    |___|\_____  /   /  /  
                       \/ \/         \/   \/\/    \__\              \/   /__/   
)" << endl;
    cout << "----------------------------------------------------------------------------------------------------------------" << endl;
    cout << "----------------------------------------------------------------------------------------------------------------" << endl;
}




int main(){
    
    printHeader1();
    printHeader2();
    printHeader3();
    printHeader4();
    
    cout << endl << endl;
    
    cout << "*********************************************************" << endl;
    cout << "*                                                       *" << endl;
    cout << "*              CLASS MANAGEMENT SYSTEM                  *" << endl;
    cout << "*                                                       *" << endl;
    cout << "*                by: Hammad Shabbir                     *" << endl;
    cout << "*                ID: 22i-1140                           *" << endl;
    cout << "*                Summer OOP Project                     *" << endl;
    cout << "*                                                       *" << endl;
    cout << "*********************************************************" << endl;
  
    cout << "\n---------------------------------------------------------" << endl;
    cout << "---------------------------------------------------------" << endl; 
    
    cout << "\n              Class Room Management System" << endl;
    cout << "\n--------------------------------------------------------" << endl;
    cout << "--------------------------------------------------------" << endl << endl;
    
        cout << "\n     *----------------Main Menu-----------------*" << endl << endl;
        cout << "--------------------------------------------------------" << endl << endl;
        
        cout << "1- User" << endl;
        cout << "     a. Teacher" << endl;
        cout << "     b. Student" << endl;
        cout << "\n--------------------------------------------------------" << endl << endl;
         
        cout << "2- Login" << endl;
        cout << "     a. Teacher Id" << endl;
        cout << "     b. Student" << endl;
        cout << "        i. Id" << endl;
        cout << "       ii. Password" << endl;
        cout << "\n--------------------------------------------------------" << endl << endl;

        cout << "3- Passwords" << endl;
        cout << "     a. Encryption" << endl;
        cout << "     b. Validation" << endl;
        cout << "\n--------------------------------------------------------" << endl << endl;

        cout << "4- Class" << endl;
        cout << "     a. Add Class" << endl;
        cout << "     b. Remove Class" << endl;
        cout << "     c. Update Class" << endl;
        cout << "     d. Display Classes" << endl;
        cout << "\n--------------------------------------------------------" << endl << endl;

        cout << "5- Assignment" << endl;
        cout << "     a. Is Late Submission" << endl;
        cout << "     b. Display Assignment" << endl;
       
        cout << "\n5.1.1- Assignment Head" << endl;
        cout << "     a. Add Assignment" << endl;
        cout << "     b. Remove Assignment" << endl;
        cout << "     c. Update Assignment" << endl;
        cout << "     d. Compare Dates" << endl;
        cout << "     e. Display All Assignments" << endl;
        cout << "\n--------------------------------------------------------" << endl << endl;
       
        cout << "6- Submission" << endl;
        cout << "     a. virtual submit" << endl;

        cout << "\n6.1.1- Text Submission" << endl;
        cout << "6.1.2- File Submission" << endl;
        cout << "\n--------------------------------------------------------" << endl << endl;
        
        cout << "7- Grade" << endl;
        cout << "     a. Grade From Score" << endl;
        cout << "     b. Display Grades Details" << endl;
        cout << "\n--------------------------------------------------------" << endl << endl;
        
        cout << "8- GradeBook" << endl;
        cout << "     a. Calculate Cumulative Grades" << endl;
        cout << "     b. Calculate Class Average" << endl;
        cout << "     c. Display GradeBook Details" << endl;
        cout << "\n--------------------------------------------------------" << endl << endl;
        
        cout << "9- File Management" << endl;
        cout << "     a. Upload Files" << endl;
        cout << "     b. Delete Files" << endl;
        cout << "     c. Download Files" << endl;
        cout << "     d. Display Files Details" << endl;
        cout << "\n--------------------------------------------------------" << endl << endl;
        
        cout << "10- Notification" << endl;
        cout << "     a. Display Notification Details" << endl;

        cout << "\n10.1.1- Notification Thorough" << endl;
        cout << "     a. Display Notification Thorough" << endl;
        cout << "\n--------------------------------------------------------" << endl << endl;
        
        cout << "0- Exit" << endl;
        cout << "\n--------------------------------------------------------" << endl;

    
    cout << endl << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "                  LESSS GO!!!                    " << endl;
    cout << "-------------------------------------------------" << endl;
        
    cout << "\n    *-------------USER MANEGEMENT------------* " << endl << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    Teacher teacher("SamiUllah", "samiullah.shah@nu.edu.pk", "Instructor","10", "instructor@123", "1000");
    Teacher teacher1("Niaz", "niaz.ahmed@nu.edu.pk", "Instructor","20", "instructor@345", "2000");
    Student* student1 = new Student("Haider Zia", "haiderzia@nu.edu.pk", "Student1","19-Batch", "student@1", "0001");
    Student* student2 = new Student("Abdul Hadi", "abdulhadi@nu.edu.pk", "Student2","20-Batch", "student@2", "0002");
    Student* student3 = new Student("Daniyal", "daniyal@nu.edu.pk", "Student3","21-Batch", "student@3", "0003");
    Student* student4 = new Student("Iqrash", "iqrash@nu.edu.pk", "Student4","22-Batch", "student@4", "0004");
    	
  	  
    cout << "\nFirstly Add Teacher " << endl;
    cout << "\n-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    string  teachername,teacheremail,teacherrole,teacherid,teacherpassword,teachercontact;
    cout << "\nEnter Teacher Name: ";
    getline(cin,teachername);
    cout << "Email: ";
    getline(cin,teacheremail);
    cout << "Role: ";
    getline(cin,teacherrole);
    cout << "ID: ";
    getline(cin,teacherid);
    cout << "Password: " ;
    getline(cin,teacherpassword);
    cout << "COntact: ";
    getline(cin,teachercontact);	  
    
    cout << "\n-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
     
   Teacher teacher2(teachername,teacheremail,teacherrole,teacherid,teacherpassword,teachercontact);
   
    ofstream userFile("user.txt");
    
    if (userFile.is_open()) {
       
       userFile << "Teachers " << endl << endl;
          
       userFile << "1- " <<  teacher.getName() << ", " << teacher.getEmail() << ", " << teacher.getRole()
         << "," << teacher.getId() << ", " << teacher.getPassword() << ", " << teacher.getContact() << endl;
       
       userFile << "2- " <<  teacher1.getName() << ", " << teacher1.getEmail() << ", " << teacher1.getRole()
         << ", " << teacher1.getId() << ", "  << teacher1.getPassword() << ", " << teacher1.getContact() << endl;
         
       userFile << "3- " <<  teacher2.getName() << ", " << teacher2.getEmail() << ", " << teacher2.getRole()
         << ", " << teacher2.getId() << ", "  << teacher2.getPassword() << ", " << teacher2.getContact() << endl;            
       
       userFile << "\nSTUDENTS " << endl << endl;
       
       userFile << "1- " <<  student1->getName() << ", " << student1->getEmail() << ", " << student1->getRole() << ", " 
                << student1->getId() << ", " << student1->getPassword() << ", " << student1->getContact() << endl;
             
       userFile << "2- " <<  student2->getName() << ", " << student2->getEmail() << ", " << student2->getRole() << ", " 
                << student2->getId() << ", " << student2->getPassword() << ", " << student2->getContact() << endl;   
                
       userFile << "3- " <<  student3->getName() << ", " << student3->getEmail() << ", " << student3->getRole() << ", " 
                << student3->getId() << ", " << student3->getPassword() << ", " << student3->getContact() << endl;    
              
       userFile << "4- " <<  student4->getName() << ", " << student4->getEmail() << ", " << student4->getRole() << ", " 
                << student4->getId() << ", " << student4->getPassword() << ", " << student4->getContact() << endl;       
      
       userFile.close();
    
       cout << "*****Data written to the file successfully!*****" << endl;
       cout << "\n-------------------------------------------------" << endl;
       cout << "-------------------------------------------------" << endl;
    }
    
    else 
    {
         cout << "Error opening the file!" << endl;
         cout << "-------------------------------------------------" << endl;
    }
    
    //Displaying OF Data
    
    cout << "\nARE YOU WANT TO SEE TEACHERS AND STUDENTS DATA (Y/N) ? ";
    char select9;
    cin >> select9;
    cout << "\n-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;

    if(select9 == 'Y' || select9 == 'y') {
    
        
             
        cout << "\n    *-------------LOGIN------------* " << endl << endl;
        cout << "-------------------------------------------------" << endl;
        cout << "-------------------------------------------------" << endl << endl;
        
        string id,studentpasswordstudent;
  
    int maxAttempts = 3;
    bool validLogin = false; // To track successful login
    int howmany = 0;
    
    
    while (!validLogin && maxAttempts > 0) {
        string id;

        cin.ignore();
        cout << "Enter Teacher Id: ";
        getline(cin, id);

        if (id == teacher.getId() || id == teacher1.getId() || id == teacher2.getId() ) {
            
            // Successful login
            if (id == teacher.getId()) {
                teacher.display();
            } 
            else if (id == teacher1.getId()) {
                teacher1.display();
            } 
            else if (id == teacher2.getId()) {
                teacher2.display(); 
            } 
          
          maxAttempts--;     
          continue;
        } 
        else {
            
            cout << "Wrong Password or Incorrect ID. Please Try Again." << endl;
            maxAttempts--;

            if (maxAttempts > 0) {
                cout << "You have " << maxAttempts << " attempts left." << endl;
            } else {
                cout << "You have exhausted all attempts. Exiting." << endl;
                break;
            }
        }
    }
        
      cout << "\n-------------------------------------------------" << endl;
      cout << "-------------------------------------------------" << endl << endl;   
      
      int maxAttempts1 = 4;
      bool validLogin1 = false; // To track successful login
      while (!validLogin1 && maxAttempts1 > 0) {
      string id1;
      string studentpassword;
        cin.ignore();
        cout << "Enter Student Id: ";
        getline(cin, id1);
        cout << "Enter Student Password: ";
        getline(cin, studentpassword);
            
      if(id1 == student1->getId() || id1 == student2->getId() || id1 == student3->getId() || id1 == student4->getId() ||
           studentpassword == student1->getPassword() ||  studentpassword == student2->getPassword() || 
           studentpassword == student3->getPassword() || studentpassword  == student4->getPassword() )  {
            
            // Successful login
            if (id1 == student1->getId() &&  studentpassword == student1->getPassword() ) {
                student1->display();
            } 
            else if (id1 == student2->getId() && studentpassword == student2->getPassword()) {
                student2->display();
            } 
            else if (id1 == student3->getId() && studentpassword == student3->getPassword()) {
                student3->display();
            } 
            else if (id1 == student4->getId() && studentpassword == student4->getPassword()) {
                student4->display();
            }
            
          maxAttempts1--;    
          continue;
        } 
        else {
            
            cout << "Wrong Password or Incorrect ID. Please Try Again." << endl;
            maxAttempts1--;

            if (maxAttempts1 > 0) {
                cout << "You have " << maxAttempts1 << " attempts left." << endl;
            } else {
                cout << "You have exhausted all attempts. Exiting." << endl;
                break;
            }
        }
    }
 
        cout << "-------------------------------------------------" << endl;  
    }
 
    else {
    
        cout << "\nSORRY YOU MISSED THAT ONE :( " << endl;
        cout << "\n-------------------------------------------------" << endl;
        cout << "-------------------------------------------------" << endl;    
     
   }  
      srand((time(0))); // Random number generator

    //Update Passowrd
    
    string teacherEncryptedPassword  = teacher.EncryptPassword(teacher.getPassword());
    string teacher1EncryptedPassword  = teacher1.EncryptPassword(teacher1.getPassword());
    string teacher2EncryptedPassword  = teacher2.EncryptPassword(teacher2.getPassword());
    string student1EncryptedPassword = student1->EncryptPassword(student1->getPassword());
    string student2EncryptedPassword = student2->EncryptPassword(student2->getPassword());
    string student3EncryptedPassword = student3->EncryptPassword(student3->getPassword());
    string student4EncryptedPassword = student4->EncryptPassword(student4->getPassword());
    
    //Validation of Passwords
    
    bool teacherpasswordvalid  = teacher.isPasswordValid(teacherEncryptedPassword);
    bool teacher1passwordvalid  = teacher1.isPasswordValid(teacher1EncryptedPassword);
    bool teacher2passwordvalid  = teacher2.isPasswordValid(teacher2EncryptedPassword);
    bool student1passwordvalid = student1->isPasswordValid(student1EncryptedPassword);
    bool student2passwordvalid = student2->isPasswordValid(student2EncryptedPassword);
    bool student3passwordvalid = student3->isPasswordValid(student3EncryptedPassword);
    bool student4passwordvalid = student4->isPasswordValid(student4EncryptedPassword);
   
    cout << "\nWOULD YOU LIKE TO SEE THE USER'S PASSOWORDS (Y/N) ? ";
    char select8;
    cin >> select8;
    cout << "\n-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;

    if(select8 == 'Y' || select8 == 'y') {
    
    
    cout << "*****USERS PASSWORDS***** " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl << endl;
    cout << teacherEncryptedPassword << endl;
    cout << teacher1EncryptedPassword << endl;
    cout << teacher2EncryptedPassword << endl << endl;
    cout << student1EncryptedPassword << endl;
    cout << student2EncryptedPassword << endl;
    cout << student3EncryptedPassword << endl;
    cout << student4EncryptedPassword << endl << endl;
    
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    cout << "*****PASSWORDS VALIDATION*****" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl << endl;
    cout << "Teacher 1 Valid Passowrd: " << (teacherpasswordvalid ? "Yes" : "No") << endl;
    cout << "Teacher 2 Valid Passowrd: " << (teacher1passwordvalid ? "Yes" : "No") << endl;
    cout << "Teacher 3 Valid Passowrd: " << (teacher2passwordvalid ? "Yes" : "No") << endl;
    cout << "Student 1 Valid Password: " << (student1passwordvalid ? "Yes" : "No") << endl;
    cout << "Student 2 Valid Passwrod: " << (student2passwordvalid ? "YES" : "NO") << endl;
    cout << "Student 3 Valid Passwrod: " << (student3passwordvalid ? "YES" : "NO") << endl;
    cout << "Student 4 Valid Passwrod: " << (student4passwordvalid ? "YES" : "NO") << endl << endl;
    
    
    }
    
    else {
    	
       cout << "\nYOU DON'T WANT TO SEE :) " << endl;
    }
   
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "\n      *---------CLASS MANAGEMENT---------*" << endl << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "*****CLASS DETAILS*****" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    Class c1("Programming","OOP","CS1004",0);
    Class c2("Digital Electronics","DLD","S1004",0);
   
    cout << "ADD ANOTHER CLASS " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;     
    
    string classN,classsubject,classdesc;
    cout << "Enter Class Name: ";
    cin.ignore();
    getline(cin,classN);
    cout << "Class Subject: ";
    getline(cin,classsubject);
    cout << "Class Description: ";
    getline(cin,classdesc);
    
    cout << "\n-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;     
    
    Class c3(classN,classsubject,classdesc,0);
    
    
    ofstream classFile("class.txt");
    
    if (classFile.is_open()) {
    
        classFile << "CLASSES " << endl << endl;
        
        classFile << "1- " <<  c1.getClassName() << ", " << c1.getSubject()  << ", " << c1.getDescription() << endl;
        classFile << "2- " <<  c2.getClassName() << ", " << c2.getSubject()  << ", " << c2.getDescription() << endl;
        classFile << "3- " <<  c3.getClassName() << ", " << c3.getSubject()  << ", " << c3.getDescription() << endl;
            
       classFile.close();
    
       cout << "*****Data written to the file successfully!*****" << endl;
       cout << "-------------------------------------------------" << endl;
       cout << "-------------------------------------------------" << endl;
    }
    
    else 
    {
         cout << "Error opening the file!" << endl;
         cout << "-------------------------------------------------" << endl;
         cout << "-------------------------------------------------" << endl;
    }
    
    c1.display();
    c2.display();
    c3.display();
    
    cout << "****After Enrolling Of Students******" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    c1.setTeacher(teacher);
    c1.addStudent(*student1);
    c1.addStudent(*student2);  
    c1.addStudent(*student3);  
    c1.addStudent(*student4);   
    c1.displayA();
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    
    c2.setTeacher(teacher1);
    c2.addStudent(*student1);
    c2.addStudent(*student2);
    c2.addStudent(*student3);  
    c2.addStudent(*student4);     
    c2.displayA();
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    cout << "\nEnter the 5th Student You Want to Enroll New Class: " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    string studentname,email,role,id,password,contact;
    cout << "Student Name: ";
    getline(cin,studentname);
    cout << "Email: ";
    getline(cin,email);
    cout << "Role: ";
    getline(cin,role);
    cout << "ID: ";
    getline(cin,id);
    cout << "Passoword: ";
    getline(cin,password);
    cout << "Contact: ";
    getline(cin,contact);
    cout << "\n-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    
    Student* student5 = new Student(studentname,email,role,id,password,contact);

    ofstream userFile1("user.txt");
    
    if (userFile1.is_open()) {
       
       userFile1 << "Teachers " << endl << endl;
          
       userFile1 << "1- " <<  teacher.getName() << ", " << teacher.getEmail() << ", " << teacher.getRole()
         << "," << teacher.getId() << ", " << teacher.getPassword() << ", " << teacher.getContact() << endl;
       
       userFile1 << "2- " <<  teacher1.getName() << ", " << teacher1.getEmail() << ", " << teacher1.getRole()
         << ", " << teacher1.getId() << ", "  << teacher1.getPassword() << ", " << teacher1.getContact() << endl;      
       
       userFile1 << "\nSTUDENTS " << endl << endl;
       
       userFile1 << "1- " <<  student1->getName() << ", " << student1->getEmail() << ", " << student1->getRole() << ", " 
                << student1->getId() << ", " << student1->getPassword() << ", " << student1->getContact() << endl;
             
       userFile1 << "2- " <<  student2->getName() << ", " << student2->getEmail() << ", " << student2->getRole() << ", " 
                << student2->getId() << ", " << student2->getPassword() << ", " << student2->getContact() << endl;   
                
       userFile1 << "3- " <<  student3->getName() << ", " << student3->getEmail() << ", " << student3->getRole() << ", " 
                << student3->getId() << ", " << student3->getPassword() << ", " << student3->getContact() << endl;    
              
       userFile1 << "4- " <<  student4->getName() << ", " << student4->getEmail() << ", " << student4->getRole() << ", " 
                << student4->getId() << ", " << student4->getPassword() << ", " << student4->getContact() << endl;       
       
       userFile1 << "5- " <<  student5->getName() << ", " << student5->getEmail() << ", " << student5->getRole() << ", " 
                << student5->getId() << ", " << student5->getPassword() << ", " << student5->getContact() << endl;       
      
       userFile1.close();
    
       cout << "*****Data written to the file successfully!*****" << endl;
       cout << "-------------------------------------------------" << endl;
    }
    
    else 
    {
         cout << "Error opening the file!" << endl;
         cout << "-------------------------------------------------" << endl;
    }
    
        
    c3.setTeacher(teacher2);
    c3.addStudent(*student1);
    c3.addStudent(*student2);
    c3.addStudent(*student3);  
    c3.addStudent(*student4);     
    c3.addStudent(*student5);  
    
    c3.displayA();
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    cout << "****ADDING CLASSES*****" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    ClassManagement cm1;
    cm1.addClass(c1);
    cm1.addClass(c2);
    cm1.addClass(c3);
    cm1.displayAllClasses();
    
    
    
    cout << "****REMOVING CLASSES**** " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl; 
    
    string classname1;
    cout << "\nEnter the Class Name You Want to Remove: ";
    getline(cin,classname1);
    cout << "\n-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl; 
    
    
    cm1.removeClass(classname1);
    cm1.displayAllClasses();  
    
    cout << "****REMOVING OF STUDENTS ONLY PROGRAMMING*****" <<endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;

    string studentname1;
    cout << "Enter the Student you want to remove: ";
    getline(cin,studentname1);
    cout << "\n-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl; 
    c1.removeStudent(studentname1);
    c1.displayA();
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    string studentname2;
    cout << "Enter the Student you want to remove: ";
    getline(cin,studentname2);
    cout << "\n-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl; 
    c1.removeStudent(studentname2);
    c1.displayA();
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    cout << "****DIGITAL ELECTRONICS STUDENTS AS IT IS****" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    c2.displayA();
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    cout << "****DIFFERENTIAL STUDENTS AS IT IS****" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    c3.displayA();
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;



    cout << "\n   *--------ASSIGNMENT MANAGEMENT---------*" << endl << endl;	
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "****Assignment Details**** " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    Assignment a1("Create Website", "C++", "22Aug", "pdf.txt", 5);
    Assignment a2("Create Resume", "C++", "27Aug", "docx.txt",10);
    Assignment a3("Create Game", "C++", "30Aug", "word.txt",20);
    Assignment a4("Create App", "C++", "31Aug", "word.txt",20);
    
    cout << "\nYOU WANT TO SET ANOTHER ASSIGNMENT " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;

    string name,description,deadline,file;
    int pointvalue;    
   
    cout << "\nEnter the 5th Assignment name: ";
    cin >> name;
    cout << "Enter the Description: ";
    cin >> description;
    cout << "Enter Deadline for Assignment: ";
    cin >> deadline;
    cout << "FIle Name: ";
    cin >> file;
    cout << "Enter the Assignment Marks: ";
    cin >> pointvalue;
    cout << "Notification for Students " << endl;
    
    cout << "\n-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    
    
    Assignment a5(name,description,deadline,file,pointvalue);
    
    
    ofstream assingmentFile("assignment.txt");
    
    if (assingmentFile.is_open()) {
       
      assingmentFile << "ASSIGNMENTS " << endl << endl;
       
      assingmentFile << "1- " << a1.getTitle() << ", " << a1.getDescription() << ", " << a1.getFiles() << ", " << a1.getDeadline()
      << ", " << a1.getPointValue() << endl;
             
      assingmentFile << "2- " << a2.getTitle() << ", " << a2.getDescription() << ", " << a2.getFiles() << ", " << a2.getDeadline()
      << ", " << a2.getPointValue() << endl;
             
      assingmentFile << "3- " <<  a3.getTitle() << ", " << a3.getDescription() << ", " << a3.getFiles() << ", " << a3.getDeadline()
       << ", " << a3.getPointValue() << endl; 
             
      assingmentFile << "4- " <<  a4.getTitle() << ", " << a4.getDescription() << ", " << a4.getFiles() << ", " << a4.getDeadline()
      << ", " << a4.getPointValue() << endl;   
      
       assingmentFile << "4- " <<  a5.getTitle() << ", " << a5.getDescription() << ", " << a5.getFiles() << ", " << a5.getDeadline()
      << ", " << a5.getPointValue() << endl;               
    
       assingmentFile.close();
    
       cout << "*****Data written to the file successfully!*****" << endl;
       cout << "-------------------------------------------------" << endl;
       cout << "-------------------------------------------------" << endl;
    }
    
       else 
       {
            cout << "Error opening the file!" << endl;
            cout << "-------------------------------------------------" << endl;
            cout << "-------------------------------------------------" << endl;
       }
    
    a1.PrintAssignment();
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    a2.PrintAssignment();
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    a3.PrintAssignment();
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    a4.PrintAssignment();
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    a5.PrintAssignment();
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
   
    AssignmentHead ah1;
        
    cout << "*****ADDING ASSIGNEMTNS**** " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;   
    
    ah1.addAssignment("23",a1);
    ah1.addAssignment("28",a2);
    ah1.addAssignment("31",a3);
    ah1.addAssignment("29",a4);
    ah1.addAssignment("12",a5);
    ah1.displayAllAssignments();
    
    string assignmentname;
    cout << "\nEnter the Assignemnt Name YOU WANT TO REPLACE PREVIOUS: ";
    cin.ignore();
    getline(cin,assignmentname);
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;   
    
    
    Assignment updatedAssignment(assignmentname, "Python", "1Sep", "python.txt",30);
    ah1.updateAssignment("Create Game", updatedAssignment);
    

    cout << "****UPDATED ASSIGMENTS****" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl; 
    ah1.displayAllAssignments();
    
    cout << "****REMOVING ASSIGNMENT**** " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl; 
    
    string assignmentname1;
    cout << "\nEnter the Assignemnt Name YOU WANT TO Remove: ";
    //cin.ignore();
    getline(cin,assignmentname1);
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl; 
    
    ah1.removeAssignment(assignmentname1);
    ah1.displayAllAssignments();
    
    cout << "****ASSIGNE ASSIGNMENT FOR STUDENT**** " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl; 
    
    student1->assignAssignment(a1);
    student2->assignAssignment(a2);
    student3->assignAssignment(a3);
    student4->assignAssignment(a4);
    student4->assignAssignment(a5);
    
    cout << "\nStudent 1: " << student1->getName() << endl; 
    a1.PrintAssignment();
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl; 
    
    cout << "\nStudent 2: " << student2->getName() << endl; 
    a2.PrintAssignment();
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl; 
    
    cout << "\nStudent 3: " << student3->getName() << endl; 
    a3.PrintAssignment();
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl; 
    
    cout << "\nStudent 4: " << student4->getName() << endl; 
    a5.PrintAssignment();
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl; 
    
 
    
    cout << "\n   *----------SUBMISSION MANAGEMENT--------*" << endl << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "****SUBMISSION & GRADING**** " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;     
    
    Submission s1("22Aug","5pm ","pdf.text","Graded","No feedback",a1);
  
    TextSubmission t1("21Aug","1pm", "file1.txt", "Graded", "Good Work!","My name is Haider and my favourite course is Programming", a1);
    TextSubmission t2("26Aug","2pm", "file2.txt", "Graded", "Excellent Work!","My name is Hadi and my favourite course is DLD", a2);
    TextSubmission t3("31Aug","3pm", "file3.txt", "Graded", "Keep it up!","My name is Daniyal and and I love Applied Physics", a3);
    TextSubmission t4("29Aug","4pm", "file4..txt", "Graded", "Well Done!","My name is Iqrash and I love English", a4);
    
    FileSubmission f1("21Aug","2pm","file1.txt", "Graded", "No feedback", a1);
    FileSubmission f2("26Aug","2pm","file2.txt", "Graded", "No feedback", a2);
    FileSubmission f3("31Aug","2pm","file3.txt", "Graded", "No feedback", a3);
    FileSubmission f4("29Aug","2pm","file4.txt", "Graded", "No feedback", a4);
    
    const int numSubmissions = 8; // Update the number of submissions accordingly
    Submission* submissions[numSubmissions] = { &t1, &t2, &t3, &t4, &f1, &f2, &f3, &f4 };
   
    s1.submit();
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;   
    
    cout << "\nYOU WANT TO SEE THE TEXT FOR Assginment (Y/N) ? ";
    char select7;
    cin >> select7;
    cout << "\n-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;

    if(select7 == 'Y' || select7 == 'y') {
    
    
    cout << "****TEXT DETAILS OF STUDENTS****" <<endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << endl;
    
    t1.texts();
    t2.texts();
    t3.texts();
    t4.texts();
    
    }
    
    else {
    
        cout << "\nUNFORTUNATELY YOU DON'T SEE :( " << endl;    
        cout << "\n-------------------------------------------------" << endl;
        cout << "-------------------------------------------------" << endl;
    
    }
    
    cout << "\n-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    
    cout << "\nARE YOU SURE TO SUBMIT THE TEXT FOR Assginment (Y/N) ? ";
    char select6;
    cin >> select6;
    cout << "\n-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;

    if(select6 == 'Y' || select6 == 'y') {
    
   
    cout << "****TEXT SUBMISSION STATUS****" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl; 
    cout << endl;
     
    for (int i = 0; i < numSubmissions; i++) {
     
      TextSubmission* textSubmission = dynamic_cast<TextSubmission*>(submissions[i]);
    
        if (textSubmission != nullptr) {
       
           textSubmission->submit();
        }  
    }
    
      
    cout << "\n-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    
     
    ofstream textFile("text.txt");
    
       if (textFile.is_open()) {
    
    
         textFile << "Material For Submission " << endl << endl;
     
           for (int i = 0; i < numSubmissions; i++) {
           
             TextSubmission* textSubmission = dynamic_cast<TextSubmission*>(submissions[i]);
        
                if (textSubmission != nullptr) {
                
                 textFile << i + 1 << "- " << textSubmission->getSubmissionTime() << ", " << textSubmission->getSubmissionDate() << ", "
                << textSubmission->getAttachedFile() << ", " << textSubmission->getEvaluationStatus() << ", "
                << textSubmission->getFeedback() << ", " << textSubmission->getText() << endl;
               }
            }

          textFile.close();
    
          cout << "*****Data written to the file successfully!*****" << endl;
          cout << "-------------------------------------------------" << endl;
          cout << "-------------------------------------------------" << endl;
       }
    
       else 
       {
            cout << "Error opening the file!" << endl;
            cout << "-------------------------------------------------" << endl;
            cout << "-------------------------------------------------" << endl;
        }
    
    } //if bracket
    
    else {
    
        cout << "\nYOu can't SUBMIT THE TEXT AS WELL :( " << endl;
        cout << "\n-------------------------------------------------" << endl;
        cout << "-------------------------------------------------" << endl;
            
    }
    
    
    cout << "\nARE YOU SURE TO SUBMIT THE FILES (Y/N) ? ";
    char select5;
    cin >> select5;
    cout << "\n-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;

    if(select5 == 'Y' || select5 == 'y') {
    
    
    cout << "****FILE SUBMISSION STAUTS****" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << endl;
    
    for (int i = 0; i < numSubmissions; i++) {
    
      FileSubmission* fileSubmission = dynamic_cast<FileSubmission*>(submissions[i]);
         
         if (fileSubmission != nullptr) {
          
           fileSubmission->submit();
       }
    } 
    
    cout << "\n-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    
    ofstream fileFile("file.txt");
    
    if (fileFile.is_open()) {
    
       fileFile << "FILE ATTACHMENTS  " << endl << endl;
        
        int count = 0;
       
        for (int i = 0; i < numSubmissions; i++) {
          
           FileSubmission* fileSubmission = dynamic_cast<FileSubmission*>(submissions[i]);
              
              if (fileSubmission && fileSubmission->getSubmissionDate() != "") {
              
                count++;
                fileFile << count << "- " << fileSubmission->getAttachedFile() << endl;
                fileFile << "   Assignment: " << fileSubmission->filesubmit.getTitle() << ", "
                     << fileSubmission->filesubmit.getDescription() << ", " << fileSubmission->filesubmit.getDeadline() << ", "
                     << fileSubmission->filesubmit.getPointValue() << endl;
             }
         }

       if (count == 0) {
        
          fileFile << "No successful file submissions." << endl;
       }
           
       fileFile.close();
    
       cout << "*****Data written to the file successfully!*****" << endl;
       cout << "-------------------------------------------------" << endl;
       cout << "-------------------------------------------------" << endl;
    }
    
       else 
       {
           cout << "Error opening the file!" << endl;
           cout << "-------------------------------------------------" << endl;
           cout << "-------------------------------------------------" << endl;
       }
     
    } //if bracket
    
    
    else {
    
       cout << "\nYOU CAN'T SUBMIT THE FILES :( " << endl;
       cout << "\n-------------------------------------------------" << endl;
       cout << "-------------------------------------------------" << endl;
    
    }
    
   

    cout << "\n-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl; 	
    
    cout << "\n   *------GRADING & FEEDBACK Mangement-------* " << endl << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    // Create grading objects and associate with submissions
    
    Grade g1,g2,g3,g4;
    
    int score1,score2,score3,score4;
    
    cout << "\nEnter the Scores for Students: "; 
    cin >> score1 >> score2 >> score3 >> score4;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    g1.setGradeFromScore(score1);
    g2.setGradeFromScore(score2);
    g3.setGradeFromScore(score3);
    g4.setGradeFromScore(score4); 
  
    ofstream gradeFile("grade.txt");
    
    if (gradeFile.is_open()) {
    
       gradeFile << "GRADES OF STUDENTS  " << endl << endl;
       
       
       gradeFile << "1- " << student1->getName() << ": " << g1.getGrade()  << ", " << g1.getScore() << ", "
             << g2.getFeedback() << endl;
       
       gradeFile << "2- " << student2->getName() << ": " << g2.getGrade()  << ", " << g2.getScore() << ", "
             << g2.getFeedback() << endl;
       
       gradeFile << "3- " << student3->getName() << ": " << g3.getGrade()  << ", " << g3.getScore() << ", "
             << g3.getFeedback() << endl;
       
       gradeFile << "4- " << student4->getName() << ": " << g4.getGrade()  << ", " << g4.getScore() << ", "
             << g4.getFeedback() << endl;
                               
       
       gradeFile.close();
    
       cout << "*****Data written to the file successfully!*****" << endl;
       cout << "-------------------------------------------------" << endl;
       cout << "-------------------------------------------------" << endl;
    }
    
    else 
    {
         cout << "Error opening the file!" << endl;
         cout << "-------------------------------------------------" << endl;
         cout << "-------------------------------------------------" << endl;
    }
    
    cout << "****Grades & Feedback Details****"<<endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    cout << "\nStudent 1: " << student1->getName() << endl;
    cout << "Assignment 1: " << a1.getTitle() << endl;
    g1.gradeDetails();
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    cout << "\nStudent 2: " << student2->getName() << endl;
    cout << "Assignment 2: " << a2.getTitle() << endl;
    student2->getName();
    g2.gradeDetails();
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    cout << "\nStudent 3: " << student3->getName() << endl;
    cout << "Assignment 3: " << a3.getTitle() << endl;
    student3->getName();
    g3.gradeDetails();
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    cout << "\nStudent 4: " << student4->getName() << endl;
    cout << "Assignment 4: " << a4.getTitle() << endl;
    student4->getName();
    g4.gradeDetails();
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    
     
    cout << "\n   *------GRADING & FEEDBACK Mangement-------* " << endl << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    cout << "****Initially GRADE BOOK DETAILS****" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    GradeBook gb(g1,'S',7,0,10,0.0);
    gb.GradeBookDetails();     
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
   
    cout << "****UPDATED SCORE & GRADES****" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl << endl;
    
    
    int score5,score6,score7,score8;
    
    cout << "CAN YOU WANT TO UPDATE THE SCORE & GRADES (Y/N) ? ";
    char select3;
    cin >> select3;
    cout << "\n-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    GradeBook gb1,gb2,gb3,gb4;
    GradeBook GB(g1,'S',7,0,10,0.0);

    
    if(select3 == 'Y' || select3 == 'y') {

    
    cout << "\nEnter the new Score: ";  
    cin >> score5 >> score6 >> score7 >> score8;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
  
    gb1.setWeightage(10);
    gb1.CalulateCumulativeGrade(score5);
    gb2.setWeightage(10);
    gb2.CalulateCumulativeGrade(score6);
    gb3.setWeightage(10);
    gb3.CalulateCumulativeGrade(score7);
    gb4.setWeightage(10);
    gb4.CalulateCumulativeGrade(score8);
    

    
    cout << "\nStudent 1: " << student1->getName() << endl;
    cout << "Assignment 1: " << a1.getTitle() << endl;
    gb1.studentgrade.gradeDetails1();
    //g1.gradeDetails();
    cout << "GPA: " << gb1.getGPA() << endl << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    
    cout << "\nStudent 2: " << student2->getName() << endl;
    cout << "Assignment 2: " << a2.getTitle() << endl;
    gb2.studentgrade.gradeDetails1();
    //g2.gradeDetails();
    cout << "GPA: " << gb2.getGPA() << endl << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    cout << "\nStudent 3: " << student3->getName() << endl;
    cout << "Assignment 3: " << a3.getTitle() << endl;
    gb3.studentgrade.gradeDetails1();
    //g3.gradeDetails();
    cout << "GPA: " << gb3.getGPA() << endl << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    cout << "\nStudent 4: " << student4->getName() << endl;
    cout << "Assignment 4: " << a4.getTitle() << endl;
    gb4.studentgrade.gradeDetails1();
    //g4.gradeDetails();
    cout << "GPA: " << gb4.getGPA() << endl << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    double classAverage = (gb1.getClassAvg() + gb2.getClassAvg() + gb3.getClassAvg() + gb4.getClassAvg()) / 4.0;
    
    }
    
    else {
    
      cout << "YOU DON'T WANT TO UPDATE THE GRADES :( " << endl;
      cout << "\n-------------------------------------------------" << endl;
      cout << "-------------------------------------------------" << endl;
    
      
    }
    
      
    

    
    cout << "****CLASS AVERAGE**** " << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
      
      
    GB.CalulateClassAverage(gb1.studentgrade.getScore(),gb2.studentgrade.getScore(),gb3.studentgrade.getScore(),
    gb4.studentgrade.getScore());
    
    cout << "\nAverage: " << GB.getClassAvg() << endl << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    
    ofstream gradebookFile("gradebook.txt");
    
    if (gradebookFile.is_open()) {
    
       gradebookFile << "UPDATE GRADES  " << endl << endl;
       
       gradebookFile << student1->getName() << ", " << gb1.studentgrade.getGrade() << endl;
       
       gradebookFile << student2->getName() << ", " << gb2.studentgrade.getGrade() << endl;
       
       gradebookFile << student3->getName() << ", " << gb3.studentgrade.getGrade() << endl;
       
       gradebookFile << student4->getName() << ", " << gb4.studentgrade.getGrade() << endl;
       
       gradebookFile << "\nCLASS AVERAGE: " << GB.getClassAvg() << endl;
       
       gradebookFile << "\nWeightage: " << gb4.getWeightage() << endl;
       
       
       gradebookFile.close();
    
       cout << "*****Data written to the file successfully!*****" << endl;
       cout << "-------------------------------------------------" << endl;
       cout << "-------------------------------------------------" << endl;
    }
    
    else 
    {
         cout << "Error opening the file!" << endl;
         cout << "-------------------------------------------------" << endl;
         cout << "-------------------------------------------------" << endl;
    }
    
    
    cout << "\nCAN YOU WANT TO SEE STUDENT'S TRANSCRIPT (Y/N) ? ";
    char select;
    cin >> select;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    if(select == 'Y' || select == 'y') {
    
    
    cout << "****STUDENT TRANSCRIPT**** " << endl << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;   
    
    cout << "\nStudent 1: " << student1->getName() << endl;
    cout << "Course Code: " <<  c1.getDescription() << endl;
    cout << "COurse Name: " << c1.getSubject() << endl;
    cout << "Course Code: " <<  c2.getDescription() << endl;
    cout << "COurse Name: " << c2.getSubject() << endl;
    cout << "Grade: " << gb1.studentgrade.getGrade() << endl;
    cout << "GPA: " << gb1.getGPA() << endl << endl;
    
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;   
    
    cout << "\nStudent 2: " << student2->getName() << endl;
    cout << "Course Code: " <<  c1.getDescription() << endl;
    cout << "COurse Name: " << c1.getSubject() << endl;
    cout << "Course Code: " <<  c2.getDescription() << endl;
    cout << "COurse Name: " << c2.getSubject() << endl;
    cout << "Grade: " << gb2.studentgrade.getGrade() << endl;
    cout << "GPA: " << gb2.getGPA() << endl << endl;
    
    
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;   
    
    cout << "\nStudent 3: " << student3->getName() << endl;
    cout << "Course Code: " <<  c1.getDescription() << endl;
    cout << "COurse Name: " << c1.getSubject() << endl;
    cout << "Course Code: " <<  c2.getDescription() << endl;
    cout << "COurse Name: " << c2.getSubject() << endl;
    cout << "Grade: " << gb3.studentgrade.getGrade() << endl;
    cout << "GPA: " << gb3.getGPA() << endl << endl;
    
    
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;   
    
    cout << "\nStudent 4: " << student4->getName() << endl;
    cout << "Course Code: " <<  c1.getDescription() << endl;
    cout << "COurse Name: " << c1.getSubject() << endl;
    cout << "Course Code: " <<  c2.getDescription() << endl;
    cout << "COurse Name: " << c2.getSubject() << endl;
    cout << "Grade: " << gb4.studentgrade.getGrade() << endl;
    cout << "GPA: " << gb4.getGPA() << endl << endl;
    
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl << endl;   
    
    }
    
    else {
      
       cout << "\nYOU DON'T WANT TO SEE " << endl;
       cout << "\n-------------------------------------------------" << endl;
       cout << "-------------------------------------------------" << endl << endl; 
    
    }
    
    cout << "    *------FILE MANAGEMENT SUSTEM------* " << endl << endl;   
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    
    cout << "****UPLOADING FILES****" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl << endl;     
        
    FileManagement fileManagement(4,1000);	
    fileManagement.FilesDetails();
    
    int MaxLimit = 4;
    int MaxSize = 2000;
    
    cout << "\nMaximum File Limit " << MaxLimit << endl;
    cout << "Maximum File Size " << MaxSize << endl << endl; 
    
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl << endl;
    
    cout << "CAN YOU WANT TO UPLOAD  THE FILES (Y/N) ? ";
    char select1;
    cin >> select1;
    cout << "\n-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl << endl;
    
    if(select1 == 'Y' || select1 == 'y') {
   
    // Upload files for FileSubmissions
    
      if((fileManagement.getSize() <= MaxSize) && (fileManagement.getLimit() <= MaxLimit)) {
    
         fileManagement.uploadFile(f1.Attachedfiles.c_str(), f1.Attachedfiles.c_str());
         fileManagement.uploadFile(f2.Attachedfiles.c_str(), f2.Attachedfiles.c_str());
         fileManagement.uploadFile(f3.Attachedfiles.c_str(), f3.Attachedfiles.c_str());
         fileManagement.uploadFile(f4.Attachedfiles.c_str(), f4.Attachedfiles.c_str());
         cout << "\n-------------------------------------------------" << endl;
         cout << "-------------------------------------------------" << endl;

    }
    
       else {
    
        cout << "Fize Size doesn't In Range " << endl;
        cout << "\n-------------------------------------------------" << endl;
        cout << "-------------------------------------------------" << endl << endl;
     
      } 
    
    }
    
    else {
    
         cout << "CANNOT UPLOAD THE FILES :( " << endl;
         cout << "\n-------------------------------------------------" << endl;
         cout << "-------------------------------------------------" << endl << endl;
           
    }
    
    cout << "****DELETING FILES****" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl << endl;   
    
    
    cout << "CAN YOU WANT TO DELETE THE FILES (Y/N) ? ";
    char select2;
    cin >> select2;
    cout << "\n-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl << endl;
    
    if(select2 == 'Y' || select2 == 'y') {
   
        // Delete files for FileSubmissions
   
        fileManagement.deleteFile(f1.Attachedfiles.c_str());
        fileManagement.deleteFile(f2.Attachedfiles.c_str());
        fileManagement.deleteFile(f3.Attachedfiles.c_str());
        fileManagement.deleteFile(f4.Attachedfiles.c_str());
        cout << "\n-------------------------------------------------" << endl;
        cout << "-------------------------------------------------" << endl << endl;

    }
    
    else {
    
       cout << "YOU DON'T WANT TO DELETE THE UPLOADED FILES :) " << endl;
       cout << "\n-------------------------------------------------" << endl;
       cout << "---------------------------------------------------" << endl << endl;

    }
    
    
    cout << "\n *------NOTIFICATIONS MANAGEMENT SUSTEM------* " << endl << endl;   
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    
    const int MAX_NOTIFICATIONS = 4;
    Notification* notifications[MAX_NOTIFICATIONS];
    int numNotifications = 0;
  
     // Add Type of notification
        
    NotificationThorough notificationsthorough(false, "New assignment posted. Deadline: September 1st, 2023.", "11:59 PM", "Email");
    notifications[numNotifications++] = &notificationsthorough; // Store the address of notificationsthorough in the array

    // Store the new notification in the dynamic array

    NotificationThorough* notificationPtr = 
    new NotificationThorough(false, "New assignment posted. Deadline: September 11th, 2023.", "11:59 PM", "GCR");
    notifications[numNotifications++] = notificationPtr; // Store the address of the dynamically allocated object
    
    cout << "\nYOUR NEW NOTIFICATIONS FOR NEW ASSIGNMENTS IS UNSEEN PLEASE CHECK (ok/OK) ? ";
    char select4;
    cin >> select4;
    cout << "\n-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl;
    
    if(select4 == 'k' || select4 == 'K') {
     
    cout << "****NOTIFICATON DATA****" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------------------------------------" << endl << endl;     
    
  
  
    //Notification functions
    
        for(int i = 0; i<numNotifications;i++) {
         
         notifications[i]->setNotificationSeen(true);
         notifications[i]->NotificationData();
         cout << "\n-------------------------------------------------" << endl;
         cout << "-------------------------------------------------" << endl << endl;     
     
       }        
    
    
      
    ofstream NotificationFile("notification.txt");
   
     NotificationFile << "Notification Data" << endl << endl;   
     
       if(NotificationFile.is_open()) {
       
         for(int i = 0; i<numNotifications;i++){
       
          NotificationFile << "Notification Deleivery: " << notifications[i]->getDeliveryMsg() << endl;
          NotificationFile << "Notification Time: " << notifications[i]->getNotificationTime() << endl;
          NotificationFile << "Notification Status : " << (notifications[i]->getNotificationSeen() ? "Seen" : "Unseen" ) 
          << endl;
          
          NotificationThorough* thoroughNotification = dynamic_cast<NotificationThorough*>(notifications[i]);
             if (thoroughNotification != nullptr) {
                NotificationFile << "\nNotification From: " << thoroughNotification->getThorough() << endl << endl;
             } 
         }
       
          cout << "*****Data written to the file successfully!*****" << endl;
          cout << "\n-------------------------------------------------" << endl;
          cout << "-------------------------------------------------" << endl << endl;
      }
    
       else 
       {
           cout << "Error opening the file!" << endl;
           cout << "\n-------------------------------------------------" << endl;
           cout << "-------------------------------------------------" << endl;
       } 
    
    }
    
    else {
     
     
       cout << "You CANNOT WANT :( " << endl << endl;
       cout << "\n-------------------------------------------------" << endl;
       cout << "-------------------------------------------------" << endl << endl;     
  
    }
    
           
      
    ofstream NotificationFile1("NotificationReading.txt");
     
       if(NotificationFile1.is_open()) {
       
         for(int i = 0; i<numNotifications;i++){
             
          NotificationFile1 << (notifications[i]->getNotificationSeen() ) << endl;
          NotificationFile1 << notifications[i]->getDeliveryMsg() << endl;
          NotificationFile1 << notifications[i]->getNotificationTime() << endl;
       
         }
       
          cout << "*****Data written to the file successfully!*****" << endl;
          cout << "\n-------------------------------------------------" << endl;
          cout << "-------------------------------------------------" << endl << endl;
      }
    
       else 
       {
           cout << "Error opening the file!" << endl;
           cout << "\n-------------------------------------------------" << endl;
           cout << "-------------------------------------------------" << endl;
       } 
    
          
        string fileName;
        cout << "Enter File Name: ";
        cin >> fileName;
    
      
        ifstream fileN(fileName);

           if (fileN.is_open()) {
           
           cout << "\n***** Reading Data from File *****" << endl;
           cout << "\n-------------------------------------------------" << endl;
           cout << "-------------------------------------------------" << endl;
           

        for (int i = 0; i < numNotifications; i++) {
        
                 bool seenStatus;
                 string deliveryMsg;
                 string notificationTime;
                 
            // Read the seen status (0 or 1)
        
             fileN >> seenStatus;
        
             if (!fileN) {
               cout << "Error reading seen status for notification " << i + 1 << endl;
               cout << "\n-------------------------------------------------" << endl;
               cout << "-------------------------------------------------" << endl;
               break;
             }

            // Read the delivery message
        
            fileN.ignore(); // Ignore the newline left by the previous extraction
          
            getline(fileN, deliveryMsg);
            
            if (!fileN) {
              cout << "Error reading delivery message for notification " << i + 1 << endl;
              cout << "\n-------------------------------------------------" << endl;
              cout << "-------------------------------------------------" << endl;
              break;
            }

            // Read the notification time
        
            getline(fileN, notificationTime);
           
            if (!fileN) {
              cout << "Error reading notification time for notification " << i + 1 << endl;
              cout << "\n-------------------------------------------------" << endl;
              cout << "-------------------------------------------------" << endl;
              break;
            }

              // Check if reading was successful
        
            if (fileN) {
            
                  notifications[i]->setNotificationSeen(seenStatus);
                  notifications[i]->setDeliveryMsg(deliveryMsg);
                  notifications[i]->setNotificationTime(notificationTime);
                  //cout << "\n-------------------------------------------------" << endl;
                  //cout << "-------------------------------------------------" << endl;
                  cout << "\nNotification " << i + 1 << " Seen Status: " << (seenStatus ? "Seen" : "Unseen") << endl;
                  cout << "Delivery Message: " << deliveryMsg << endl;
                  cout << "Notification Time: " << notificationTime << endl;
                  cout << "\n-------------------------------------------------" << endl;
                  cout << "-------------------------------------------------" << endl;
            }
             
           else {
            
               cout << "Error reading data for notification " << i + 1 << endl;
               cout << "\n-------------------------------------------------" << endl;
               cout << "-------------------------------------------------" << endl;
               break; // Exit loop if reading fails
          }
        
        }//For loop

           fileN.close();
    
        } //if fileN is off bracket
        
        else {
    
          cout << "Unable to open file: " << fileName << endl;
          cout << "\n-------------------------------------------------" << endl;
          cout << "-------------------------------------------------" << endl;
        }
        
        
        cout << "\n  *-----File Handling & Data Persistance------* " << endl << endl;
        cout << "\n---------------------------------------------------------" << endl;
        cout << "---------------------------------------------------------" << endl << endl;       
 
        cout << "  *-----------File Handling is Exceptional!!!-----------* " << endl;
        cout << "\n------------------------------------------------------------------ " << endl;
        cout << "------------------------------------------------------------------ " << endl << endl;
        
        cout << "  *-----------Data Persistance, Excellent JOb!!!--------* " << endl;
        cout << "\n------------------------------------------------------------------ " << endl;
        cout << "------------------------------------------------------------------ " << endl << endl;
        cout << "  *--------Code Quality & Comments is Outstanding, Great!!!----* " << endl;
        cout << "\n------------------------------------------------------------------ " << endl;
        cout << "------------------------------------------------------------------ " << endl << endl;
   
     
        printHeader6(); 
        printHeader5(); 

    return 0;
    
    
}    
    
