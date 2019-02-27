//
//  Header.h
//  Lexicon
//
//  Created by Wadker on 3/11/18.
//  Copyright © 2018 Wadh Alsabahi. All rights reserved.
//

#ifndef Lexicon_h
#define Lexicon_h

#include <string>
#include <fstream>
#include <iostream>
#include <list>


using namespace std;


class Lexicon {

public:

    Lexicon();



    Lexicon(const string& fileName);


    bool containsWord(const string& word);
    //returns true if word is in the Lexicon, and false otherwise

    list <string> startWith(char ch);
    //returns a list a of words that start with a particular letter, ch.

    list <string> startWith(const string& prefix);
    //  returns a list of words that start with prefix.

    list<string> endWith(char ch);
    // returns a list of words that end with a particular character, ch.

    list<string> endWith(const string& suffix);
    //returns a list of words that end with suffix.

    void addWord(const string& str);
    //Adds str to the Lexicon if it is not there already. If it is there already, do nothing.

    void updateWord(const string& target, const string& replacement);
    //Changes the spelling of target to become replacement.

    friend bool operator==(const Lexicon& d1, const Lexicon& d2);

    /* returns true iff d1 and d2 contain the same words, not necessarily in the same
    order.
    (N.B. be careful here. You can not just assume that you can compare the lexicons
     word by word, since they may not be stored in the same order.)
     */

    friend ostream &operator <<(ostream& os, const Lexicon& d);
    // Outputs the content of the Lexicon (in any order).





private:


    list <string> wordList;


};






#endif /* Header_h */
