//
//  Book.h
//  Bookhw5
//
//  Created by Wadker on 5/6/18.
//  Copyright © 2018 Wadh Alsabahi. All rights reserved.
//

#ifndef Book_h
#define Book_h

#include <iostream>
#include <string>
#include <set>
#include <vector>

using namespace std;


class Book{

public:


    Book();

    Book(const string& title, const string& publisher, int yearOfPublication, string* authors, int numAuthors);



//Accessor functions for all of the data fields, e.g. string getTitle(), etc.

    string getTitle();

    string getPublisher();

    int getYear();

    vector <string> getAuthor();

     int getNumAuthors();



friend bool operator ==( const Book& b1, const Book& b2);

    //This will return true iff the two Books have the same title.
    //(You can assume that the database will not contain 2 books with exactly the same
     //title.

friend  bool operator < (const Book& b1,const Book& b2);
    //This will return true iff the title of book1 is lexicographically before the title of
   // book2.


  friend  ostream& operator << (ostream& os, const Book& b);
   // This will print a representation for a Book. For example:

     //   Title: Data Structures with C++ Using STL
       // Authors: William Topp and William Ford

//Publisher: Prentice Hall
//Year: 2002
  //  You may, of course, write as many private functions as you would like to help your implementation.


private:

    string titles;
    string publishers;
    int yearOfPublications;
    vector <string> authors;



};








#endif /* Book_h */
