//
//  ContactList.cpp
//  Contact2
//
//  Created by Wadker on 2/19/18.
//  Copyright © 2018 Wadh Alsabahi. All rights reserved.
//

#include "Contact.h"
#include "ContactList.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

using namespace std;

ContactList::ContactList(){}

ContactList::ContactList(Contact* contacts, int numContacts):list(contacts,contacts + numContacts){

    for (int i = 0 ; i < list.size();i++){
        list.push_back(*contacts);
    }
        list.resize(numContacts);
}



vector<Contact> ContactList::getList() {

    return list;
}

Contact &ContactList::searchLast(string seaLast) {
    for (int i = 0 ; i < list.size();i++){
        if (list[i].getlname()==seaLast){
           list[i].getFullName();
            return list[i];
    }
    }
    return  sentienl;
}


Contact &ContactList::searchNum(string seaNum) {
    for (int i = 0 ; i < list.size();i++){
        if (list[i].getPhone()==seaNum){
            list[i].getFullName();
            return list[i];
        }
    }

    return sentienl;
}

vector<Contact> ContactList::letterName(char letter) {
    vector<Contact> temp;
    for (int i = 0 ; i < list.size();i++){
        if(letter==list[i].getlname()[0]){
            temp.push_back(list[i]);}
    }
    for (auto v : temp )
        cout << v << endl;
    return temp ;
}


vector<Contact> ContactList::seaCity(string city) {
    vector<Contact> temp;
    for (int i = 0 ; i < list.size();i++){
        if(city==list[i].getCity()){
            temp.push_back(list[i]);
            }
    }
    for (auto v : temp )
        cout << v << endl;
    return temp;
}


void ContactList::addContact(Contact& contacts) {
        for (int i = 0 ; i < list.size();i++)
            if (contacts.getPhone()== list[i].getPhone()){
                break;
            }

                list.push_back(contacts);
}



long ContactList::vectorSize() {
    return list.size();
}



void ContactList::eraseContact(string erseConLt) {
    int i=0;
    for ( i = 0 ; i < list.size();i++){
        if(erseConLt==list[i].getlname()){
            list.erase(list.begin()+i);
            --i;
        }
    }

}




Contact ContactList::operator[](int index) {
    if((index < list.size())&&(index > 0)){
        throw string ("Erro: Index out of bound");
}
    return list[index];
}




ostream &operator<<(ostream& os, ContactList& lista){
    for ( int i = 0 ; i < lista.vectorSize();i++){
        os << lista.getList()[i]<< endl;
    }
    return os;
}




























