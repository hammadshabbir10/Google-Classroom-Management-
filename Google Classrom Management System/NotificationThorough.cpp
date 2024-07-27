#include <iostream>
#include "NotificationThorough.h"
using namespace std;

NotificationThorough::NotificationThorough(){

	notificationthorough = "";
}

NotificationThorough::NotificationThorough(bool s, string d, string t, string nt):Notification(s,d,t) {

	notificationthorough = nt;

}


//Setter

void  NotificationThorough::setThorough(string nt) {

	notificationthorough = nt;

}

//Getter

string  NotificationThorough::getThorough() {

	return notificationthorough;

}


//Notification in the Form of

void NotificationThorough::NotificationData() const {

        Notification::NotificationData();
	cout << "Notiifcation in the form of: " << notificationthorough << endl;
	 
}	



	
