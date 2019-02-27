//
//  File.cpp
//  Lexicon
//
//  Created by Wadker on 3/11/18.
//  Copyright © 2018 Wadh Alsabahi. All rights reserved.
//

#include "Lexicon.h"

#include <cstring>
#include <string>
#include <fstream>
#include <iostream>
#include <list>
#include <iterator>

using namespace std;


Lexicon::Lexicon():wordList(){
}


Lexicon::Lexicon(const string &fileName){


    ifstream inFile(fileName.c_str());

    if (!inFile){
        cout << "File is not found" << endl;
        exit(1);
    }
    else{
        string line;
        while (getline(inFile, line))
            wordList.push_back(line);
    }
}

bool Lexicon::containsWord(const string &word) {

    for (const auto &ls : wordList){
        if((ls).compare(word) == 0){
            // cout << " contain\n";// it will return 1
            return true;
        }
    }
   // cout << " dont contain\n"; // it will return 0
    return false;
}


list<string> Lexicon::startWith(char ch) {
    list<string> temp;
  for (auto ls : wordList){
      if((ls)[0] == ch){
          temp.push_back(ls);
      }
    }

  // for (list<string>::const_iterator it = temp.begin(); it != temp.end(); ++it)
   // cout << *it << endl;

    return temp;
}


list<string> Lexicon::startWith(const string &prefix) {

    list<string> temp;
    std::list<string>::iterator it;
    size_t len2 = prefix.size();
    int i;
    bool flag = true;
    for(it=wordList.begin();it!=wordList.end();it++)
    {
    size_t len = (*it).size();
    flag = true;
        if(len < len2)
            continue;
        for(i=0;i<len2;i++)
        {
            if(prefix[i] != (*it)[i])
            {
                flag = false;
                break;
                }
        }
        if(flag == true)
            temp.push_back(*it);
    }
    return temp;
}



list<string> Lexicon::endWith(char ch) {
    list<string> temp;
    for (auto ls : wordList){
        if((ls)[ls.length()-1 ] == ch)
            temp.push_back(ls);
    }
    return temp;
}

list<string> Lexicon::endWith(const string &suffix) {

    list<string> temp;
    std::list<string>::iterator it;
    size_t len2 = suffix.size();
    int i;
    bool flag = true;
    for(it=wordList.begin();it!=wordList.end();it++)
    {
        long len = (*it).size();
        flag = true;

        if(len < len2)
            continue;
        for(i=0;i<len2;i++)
        {
            if(suffix[len2-i-1] != (*it)[len-i-1])
            {
                flag = false;
                break;
            }
        }
        if(flag == true)
        temp.push_back(*it);
    }
    return temp;
}

void Lexicon::addWord(const string &str) {

    for (auto ls : wordList){
        if((ls).compare(str) != 0){
        // if they aren't equal zero. the word don't exist
            wordList.push_back(str);
            break;
        }
    }
}

    void Lexicon::updateWord(const string &target, const string &replacement) {

    std::list<string>::iterator it;
        for(it=wordList.begin();it!=wordList.end();it++){
            if((*it).compare(target) == 0)
                *it = replacement ;
        }

    }

bool operator==(const Lexicon& d1, const Lexicon& d2){
    //for (const auto &ls: wordList)

    return d1.wordList == d2.wordList;

}

ostream &operator <<(ostream& os, const Lexicon& d){

    for (const auto &ls: d.wordList)
        os << ls << endl;
    return os;
}
























