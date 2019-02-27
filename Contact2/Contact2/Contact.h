//Name: Wadh Alsabahi
//Professor: Ari Mermelstein
//  Contact.h
//  Contacts
//
//  Created by Wadker on 2/5/18.
//  Copyright © 2018 Wadh Alsabahi. All rights reserved.
//

#ifndef Contact_h
#define Contact_h

#include <stdio.h>
#include <string>
#include <iostream>


using namespace std;


class Contact{

public:

    Contact(); // defualt constructure

    Contact(string firstName ,string lastName, string phoneNumber,string address,string city, string state);

    Contact(string firstName , string lastName, string phoneNumber);

    string getFname();
    string getlname();
    string getPhone();
    string getAddress();
    string getCity();
    string getState();
    string getFullName();

    void update(string firstName ,string lastName, string phoneNumber,string address,string city, string state);



    // bool operator==( Contact& rhs );

    friend  bool operator==(Contact& rhs, Contact& lhs);

    friend bool operator!=(Contact& lhs ,Contact& rhs);

    friend bool operator < ( Contact& lhs,Contact& rhs);

    friend bool operator > ( Contact& lhs,Contact& rhs);

    friend ostream &operator<<(ostream& os, Contact& contact);



private:
    string firstName;
    string lastName;
    string phoneNumber;
    string address;
    string city;
    string state;
    
};

#endif /* Contact_h */

