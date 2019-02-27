//
//  main.cpp
//  Bookhw5
//
//  Created by Wadker on 5/6/18.
//  Copyright © 2018 Wadh Alsabahi. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
#include <vector>
#include <fstream>
#include <map>
#include <set>

#include "Book.h"
#include "BookDatabase.h"

using namespace std;


int main() {


    BookDatabase bookbase ;



    ifstream inFile("BookList.txt");

    if (!inFile){
        cout << "File is not found" << endl;
        exit(1);
    }

    string title;
    string publishers;
    int yearOfPublications;
    int numAuthors = 0;


    while (!inFile.eof()){

    inFile>> title;
    inFile>>numAuthors;

    string author[numAuthors];

    for (int i = 0; i < numAuthors; i++){
        inFile >>author[i];
    }

    inFile>>publishers;
    inFile>> yearOfPublications;

    Book b (title,publishers,yearOfPublications,author,numAuthors);


        cout << b << endl;


        bookbase.addBook(b);



    }

    cout << "*****************DataBase*****************\n";


    cout << bookbase << endl;



    cout << "*****************SearchTitle*****************\n";



    Book temp0 = bookbase.searchByTitle("Introduction_to_Algorithms");

    cout << temp0 << endl;



    cout << "*****************SearchAuthor*****************\n";



    set <Book> temp = bookbase.searchByAuthor("McConnell");

    for (set<Book>::const_iterator it = temp.begin(); it!=temp.end(); it++){
        cout << *it << endl;
    }

    cout << "*****************Year*****************\n";



    set <Book> temp1 = bookbase.publishedBefore(2013);

    for (set<Book>::const_iterator itm = temp1.begin(); itm!=temp1.end(); itm++){
        cout << *itm << endl;
    }


    cout << "*****************By publisher*****************\n";

    set <Book> temp2 = bookbase.searchByPublisher("Jones_and_Bartlett");

    for (set<Book>::const_iterator it = temp.begin(); it!=temp.end(); it++){
        cout << *it << endl;
    }



    cout << "*****************remove*****************\n";

    bookbase.removeBook("Analysis_of_Algorithms");

    cout << bookbase << endl;




    return 0;
}
