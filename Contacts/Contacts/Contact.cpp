//Name: Wadh Alsabahi
//Professor: Ari Mermelstein
//  Contact.cpp
//  Contacts
//
//  Created by Wadker on 2/6/18.
//  Copyright © 2018 Wadh Alsabahi. All rights reserved.
//

#include "Contact.h"

#include <iostream>
#include <string>
#include <cstring>

using namespace std;
// defualt constr
Contact::Contact() : firstName("No"), lastName("Name"), phoneNumber("No Phone Number"), address("No Address"),city("No City"),state("No State") {}

Contact::Contact(string firstName ,string lastName, string phoneNumber,string address,string city, string state):firstName(firstName),lastName(lastName),phoneNumber(phoneNumber),address(address),city(city),state(state){
}

Contact::Contact(string firstName , string lastName, string phoneNumber):firstName(firstName),lastName(lastName),phoneNumber(phoneNumber){

}

// getters func
string Contact::getFname(){
    return firstName;
}
string Contact::getlname(){
    return lastName;
}
string Contact::getPhone(){
    return phoneNumber;
}
string Contact::getAddress(){
    return address;
}
string Contact::getCity(){
    return city;
}
string Contact::getState(){
    return state;
}
// fullName
string Contact::getFullName(){

    return (firstName+" "+lastName);
}

 // update informations
void Contact::update(string firstName ,string lastName, string phoneNumber,string address,string city, string state){
    this-> firstName= firstName;
    this -> lastName= lastName;
    this -> phoneNumber = phoneNumber;
    this -> address = address;
    this -> city= city;
    this -> state= state;
}

//bool Contact::operator==( Contact& rhs){

    //return this->firstName == rhs.firstName && this->lastName == rhs.lastName;
//}

// overloading through friend type.

bool operator==( Contact& lhs, Contact& rhs){

 return lhs.getFname()==rhs.getFname()&& rhs.getlname()== rhs.getlname();
}


bool operator!=(Contact& lhs ,Contact& rhs){

    return lhs.getFname()!=rhs.getFname()&& rhs.getlname()!= rhs.getlname();
}


bool operator<( Contact& lhs,Contact& rhs){
    return lhs.getlname()<rhs.getlname();
}

bool operator>( Contact& lhs,Contact& rhs){
    return lhs.getlname()>rhs.getlname();
}

ostream &operator<<(ostream& os, Contact& contact){
    os << contact.getFname()<<" "<<contact.getlname()<<'\t';
    os << " \t\tPhone Number: "<< contact.getPhone() << endl;
    os << contact.getAddress()<<endl;
    os << contact.getCity()<<", "<<contact.getState();
    return os;
}















