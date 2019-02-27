//
//  main.cpp
//  listClass
//
//  Created by Wadker on 2/22/18.
//  Copyright © 2018 Wadh Alsabahi. All rights reserved.
//

#include <iostream>
#include <list>


using namespace std;

int main(int argc, const char * argv[]) {

    int array[] = {2,4,7,10,12};

    list<int> numbers(array,array+5);

    numbers.push_front(14);
    numbers (2,11);

    for (auto l : numbers)
        cout << l << endl;



}
