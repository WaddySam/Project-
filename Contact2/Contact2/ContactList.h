//
//  ContactList.h
//  Contact2
//
//  Created by Wadker on 2/19/18.
//  Copyright © 2018 Wadh Alsabahi. All rights reserved.
//

#ifndef ContactList_h
#define ContactList_h
#include <iostream>
#include <vector>

using namespace std;


class ContactList{
public:


    ContactList();

    ContactList(vector<Contact> list);

    ContactList(Contact* contact, int numContacts);

    Contact& searchLast(string seaLast);
    Contact& searchNum(string seaNum);

    vector<Contact> letterName (char letter);

    vector<Contact> seaCity(string city) ;

    void addContact(Contact& contacts);


    long vectorSize();
    
    void eraseContact(string erseConLt);

    Contact operator[](int index );

    friend ostream &operator<<(ostream& os,const ContactList& contacts);

    vector<Contact> getList();



private:

    vector<Contact> list;
    Contact sentienl;
};

#endif /* ContactList_h */
