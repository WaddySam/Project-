//
//  main.cpp
//  Lexicon
//
//  Created by Wadker on 3/11/18.
//  Copyright © 2018 Wadh Alsabahi. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include "Lexicon.h"

using namespace std;





int main() {

    string file1 = "text1.txt";
    string file2 = "text2.txt";
    Lexicon lex1 (file1);
    Lexicon lex2 (file2);

    cout << "********text1********"<<endl;

    cout << lex1 << endl;

   // cout << "********text2********"<<endl;

  // cout << lex2 << endl;


    cout << "********ADDING a word********"<<endl;
    lex1.addWord("frank");


    cout << "********text1 again********"<<endl;

    cout << lex1 << endl;


    cout << "*******contains word*********"<<endl;

   cout << lex1.containsWord("frank")<< endl;

    cout << "******start with char **********"<<endl;


    list<string> tempList = lex1.startWith('a') ;
    for (list<string>::const_iterator it = tempList.begin(); it != tempList.end(); ++it)
         cout << *it << endl;

    cout << "*******start with prefix*********"<<endl;

    tempList = lex1.startWith("aa");

    for (const auto &ls : tempList){
        cout << ls << endl; }

    cout << "*******start with suffix *********"<<endl;

    tempList = lex1.endWith("es");

    for (const auto &ls : tempList){
        cout << ls << endl;
    }


    cout << "*******start with lettle *********"<<endl;

    tempList = lex1.endWith("e");

    for (const auto &ls : tempList){
        cout << ls << endl;
    }

    lex1.updateWord("frank", "sam");


    cout << "********text1********"<<endl;

    cout << lex1 << endl;


    return 0;
}





