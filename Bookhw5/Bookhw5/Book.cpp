//
//  Book.cpp
//  Bookhw5
//
//  Created by Wadker on 5/6/18.
//  Copyright © 2018 Wadh Alsabahi. All rights reserved.
//

#include "Book.h"

#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;



Book::Book(){}

    Book::Book( const string& title, const  string& publisher, int yearOfPublication, string* author, int numAuthor):titles(title),publishers(publisher),yearOfPublications(yearOfPublication),authors(author,author+numAuthor){


    }




string Book::getTitle(){

    return titles;

}

string Book::getPublisher(){



    return publishers;
}


int Book::getYear(){


    return yearOfPublications;
}


vector <string> Book::getAuthor(){

    return authors;
}

bool  operator ==( const Book& b1,  const Book& b2){
    return b1.titles==b2.titles;
}

    bool  operator < ( const  Book& b1, const Book& b2){
     if (b1.titles.compare(b2.titles) < 0)
         return true;
     else
         return false;
}


  ostream& operator << (ostream& os,  const Book& b){

      os <<"Title: "<<b.titles<< endl;

      for (int i=0 ; i < b.authors.size();i++){
          os <<"Auther["<<i+1<<"]:"<< b.authors[i]<< endl;
      }

      os << "Publisher: " << b.publishers<< endl;
      os<< "Year: " << b.yearOfPublications<< endl;
      return os;
}



