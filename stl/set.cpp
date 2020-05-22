#include "iostream"
#include "set"

/*
------------------------------------------------------------
- title: set.cpp
- Author: Rakesh Niraula
- copyright (C) 2020. All rights reserved
- date: 2020-05-11 11:29:00
------------------------------------------------------------
*/

using namespace std;

int main()
{
    set<string> fruits;

    fruits.insert("Apple");
    fruits.insert("Banana");
    fruits.insert("Mango");
    fruits.insert("Orange");
    fruits.insert("Grapes");
    fruits.insert("Apple");

    for (set<string>::iterator itr = fruits.begin(); itr != fruits.end(); itr++)
    {
        cout << *itr << endl;
    }

    cout << "----------------" << endl;
    return 0;
}