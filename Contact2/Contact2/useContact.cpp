//Name: Wadh Alsabahi
//Professor: Ari Mermelstein
//  main.cpp
//  Contacts
//
//  Created by Wadker on 2/22/18.
//  Copyright © 2018 Wadh Alsabahi. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include "Contact.h"
#include "ContactList.h"



using namespace std;



int main() {
    Contact c1("Ari","Mermelstein","718-111-1111","2900 Bedford ave","Brooklyn","NY");
    Contact c2("Wadh","Sam","718-111-1112");
    Contact c3;
    Contact c4("John","Jackson","718-111-1114","2900 Bedford ave","Queens","NY");
    Contact c5("Alex","Meller","718-111-1115");
    Contact c6("Will","Frankln","718-111-1116","2900 Bedford ave","Brooklyn","NY");



    cout <<"\nContact:\n"<< c1<<endl;

    if (c1==c2)
        cout << c1.getFullName() <<" is the same one as " << c2.getFullName() <<endl;


    if (c1<c2)
        cout <<c1.getlname() <<" is before " << c2.getlname()<< endl;

    if (c1>c2)
        cout <<c2.getlname() <<" is before " << c1.getlname()<< endl;

    if (c1!=c2)
        cout << c1.getFullName() <<" is not the same name as " << c2.getFullName() <<endl;

    c3.update("Jack", "will","(000) - 000 - 0000","1212  31 ave","brook","ny");

    cout <<"Contact updated:\n"<< c1 << endl;

    cout <<"Contact:\n"<< c3<< endl;


    cout << "\n******************************\n";




    ContactList list;
    list.addContact(c1);
    list.addContact(c2);
    list.addContact(c3);
    list.addContact(c4);
    list.addContact(c5);
    list.addContact(c6);


    cout << "\n*************Contact List*****************\n";

    for ( int i = 0 ; i < list.vectorSize(); i++){
        cout << " Contact "<<i+1<<" : "<< list.getList()[i] <<endl;
    }
    cout << "\n**************Last name search ****************\n";
    cout << list.searchLast("Mermelstein") <<endl;
    cout << "\n***********City search *******************\n";
    list.seaCity("Brooklyn");
    cout << "\n**************Search By first Letter in last name ****************\n";
    list.letterName('M');

    cout << "\n**************Search By Phone Number in****************\n";
    cout << list.searchNum("718-111-1114")<< endl;

    cout << "\n************** Bfore Deleting Contact ****************\n";

    for ( int i = 0 ; i < list.vectorSize(); i++){
        cout << " Contact "<<i+1<<" : "<< list.getList()[i] <<endl;
    }

    list.eraseContact("Jackson");

   cout << "\n************** After Deleting Contact ****************\n";

    for ( int i = 0 ; i < list.vectorSize(); i++){
        cout << " Contact "<<i+1<<" : "<< list.getList()[i] <<endl;
    }




    return 0;
}


