//
//  BookDatabase.cpp
//  Bookhw5
//
//  Created by Wadker on 5/9/18.
//  Copyright © 2018 Wadh Alsabahi. All rights reserved.
//

#include <stdio.h>
#include <map>
#include <utility>
#include "BookDatabase.h"
#include "Book.h"

using namespace std;



Book& BookDatabase::searchByTitle(const string& title){
    Book temp ;

    for ( map<string,Book>::iterator imap = bookData.begin(); imap!=bookData.end(); imap++){
        if (imap->second.getTitle() ==title){
            temp = imap->second;
        }
    }
    return temp;
}


set<Book> BookDatabase::searchByAuthor(const string& author){
    set<Book> sBook;

    for ( map<string,Book>::iterator imap = bookData.begin(); imap!=bookData.end(); imap++){
        for (int i = 0 ; i < imap-> second.getAuthor().size(); i++)
            if (imap->second.getAuthor()[i]== author)
            sBook.insert(imap->second);
    }
    return sBook;
}



set<Book> BookDatabase::publishedBefore(int year){

    set<Book> sBook1;

    for ( map<string,Book>::iterator imap = bookData.begin(); imap!=bookData.end(); imap++){
        if (imap->second.getYear() < year ){
            sBook1.insert(imap->second);
        }
    }

    return sBook1;
}


set<Book> BookDatabase::searchByPublisher(const string& publisher){

    set<Book> sBook;

    for ( map<string,Book>::iterator imap = bookData.begin(); imap!=bookData.end(); imap++){
        if(imap->second.getPublisher()==publisher)
            sBook.insert(imap->second);
    }
    return sBook;
}

void BookDatabase::addBook(Book& book){

    Book foundTitle;
            pair <string,Book> addBook;
            addBook.first= book.getTitle();
            addBook.second=book;
            bookData.insert(addBook);
    
}

void BookDatabase::removeBook(const string& title){
    map<string,Book>::iterator it = bookData.find(title);
    if(it!=bookData.end())
        bookData.erase(it);
    else
        cerr<<"Book doesn't exist"<<endl;
}


ostream& operator <<(ostream& os, BookDatabase& bookDatabase){

 for ( map<string,Book>::iterator imap = bookDatabase.bookData.begin();imap
      !=bookDatabase.bookData.end(); imap++){


     os << imap -> second << endl;

 }
    
    return os;
}




