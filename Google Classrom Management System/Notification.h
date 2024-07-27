#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <iostream>
#include <string>
using namespace std;

class Notification {

private:

    bool Notificationseen;
    string NotificationDelivery;
    string Notificationtime;

public:

    // Constructors
    Notification();
    Notification(bool, string, string);

    // Destructor
    ~Notification() {};

    // Setter methods
    void setNotificationSeen(bool);       // Setter for the notification seen status
    void setDeliveryMsg(string);          // Setter for the delivery message
    void setNotificationTime(string);     // Setter for the notification time

    // Getter methods
    bool getNotificationSeen();           // Getter for the notification seen status
    string getDeliveryMsg();              // Getter for the delivery message
    string getNotificationTime();         // Getter for the notification time

    // Virtual method to display notification data
    virtual void NotificationData() const;

};

#endif

