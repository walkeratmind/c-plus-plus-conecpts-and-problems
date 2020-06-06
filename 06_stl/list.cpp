#include <iostream>
#include <list>

using namespace std;

/*
------------------------------------------------------------
- title: list.cpp
- Author: Rakesh Niraula
- copyright (C) 2020. All rights reserved
- date: 2020-05-08 22:02:24
------------------------------------------------------------
*/

int main()
{
    list<string> cities;

    cities.push_back("Kathmandu");
    cities.push_back("Kathmandu");
    cities.push_back("Silicon valley");
    cities.push_back("Pokhara");
    cities.push_back("Paris");
    cities.push_back("Moscow");

    for (list<string>::iterator itr = cities.begin(); itr != cities.end(); itr++)
    {
        cout << *itr << endl;
    }

    return 0;
}