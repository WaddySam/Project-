//
//  BookDatabase.h
//  Bookhw5
//
//  Created by Wadker on 5/6/18.
//  Copyright © 2018 Wadh Alsabahi. All rights reserved.
//

#ifndef BookDatabase_h
#define BookDatabase_h

#include <iostream>
#include <string>
#include <set>
#include <map>
#include "Book.h"


using namespace std;


class BookDatabase {



public:
    Book& searchByTitle(const string& title);
    //returns a reference to the Book object that contains the given title


    set<Book> searchByAuthor(const string& author);
    //returns a set of Books by the given author. (This one is a bit tricky).

    set<Book> publishedBefore(int year);
    //returns a set of Books that were published before a given year.


    set<Book> searchByPublisher(const string& publisher);
    //returns a set of Books that were published by the given publisher.

    void addBook(Book& book);
    //adds a new book to the database if it is not there already. (You will implement
    //this by adding a new pair into the map where the key is book.getTitle() and the value is book). If it is there already, do nothing.


    void removeBook(const string& title);
    //Remove the book with the given title from the database if it is there.

    friend ostream& operator <<(ostream& os, BookDatabase& bookDatabase);
   // Prints a representation for a book database. 



private:

 map <string, Book> bookData;


};


#endif /* BookDatabase_h */
