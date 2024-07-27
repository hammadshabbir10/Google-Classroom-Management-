#ifndef NOTIFICATIONTHOROUGH_H
#define NOTIFICATIONTHOROUGH_H

#include <iostream>
#include "Notification.h" // Include the base Notification class header

using namespace std;

class NotificationThorough : public Notification {

private:

    string notificationthorough;

public:

    // Constructors
    NotificationThorough();
    NotificationThorough(bool, string, string, string);

    // Destructor
    ~NotificationThorough() {};

    // Setter for the thorough notification
    void setThorough(string);

    // Getter for the thorough notification
    string getThorough();

    // Override the NotificationData method
    virtual void NotificationData() const;

};

#endif

