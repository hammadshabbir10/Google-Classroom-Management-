#include <iostream>
#include "Notification.h"
using namespace std;

//Constructor

Notification::Notification() {
  
	Notificationseen = false; 
	NotificationDelivery = " "; 
	Notificationtime = ""; 
}

//Parametertized

Notification::Notification(bool s, string d, string t) {

	Notificationseen = s; 
	NotificationDelivery = d; 
	Notificationtime = t; 
}	

//Setters

void Notification::setNotificationSeen(bool status) {

        Notificationseen = status;
}

void Notification::setDeliveryMsg(string msg) {
        
        NotificationDelivery = msg;
}

void Notification::setNotificationTime(string time) {

        Notificationtime = time;
}

//Getters

bool Notification::getNotificationSeen()  {

        return Notificationseen;
}


string Notification::getDeliveryMsg() {

        return NotificationDelivery;
}

string Notification::getNotificationTime() {

        return Notificationtime;
}

//Functions

void Notification::NotificationData() const{

	cout << "Notification!!!!! " << endl;
	cout << "Message: " << NotificationDelivery << endl;
	cout << "Time: " << Notificationtime << endl;
	cout << "Seen or Unseen: " << (Notificationseen?"Seen" : "Unseen") << endl;
	
}	
