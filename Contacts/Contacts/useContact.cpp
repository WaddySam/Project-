//Name: Wadh Alsabahi
//Professor: Ari Mermelstein
//  main.cpp
//  Contacts
//
//  Created by Wadker on 2/5/18.
//  Copyright © 2018 Wadh Alsabahi. All rights reserved.
//

#include <iostream>
#include <string>

#include "Contact.h"


using namespace std;

int main() {

    Contact c1("Ari","Mermelstein","718-111-1111","2900 Bedford ave","Brooklyn","NY");
    Contact c2("Wadh","Sam","718-111-1111");
    Contact c3;

    cout <<"\nContact:\n"<< c1<<endl;

    if (c1==c2)
        cout << c1.getFullName() <<" is the same one as " << c2.getFullName() <<endl;
    

    if (c1<c2)
        cout <<c1.getlname() <<" is before " << c2.getlname()<< endl;

     if (c1>c2)
          cout <<c2.getlname() <<" is before " << c1.getlname()<< endl;

    if (c1!=c2)
         cout << c1.getFullName() <<" is not the same name as " << c2.getFullName() <<endl;

    c1.update("Jack", "will","(000) - 000 - 0000","1212  31 ave","brook","ny");

    cout <<"Contact updated:\n"<< c1 << endl;

    cout <<"Contact:\n"<< c3<< endl;



    return 0;
}
