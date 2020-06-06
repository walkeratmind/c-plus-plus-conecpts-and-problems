#include <iostream>

using namespace std;

/*
------------------------------------------------------------
- title: intro.cpp
- Author: Rakesh Niraula
- copyright (C) 2020. All rights reserved
- date: 2020-05-06 22:09:29
------------------------------------------------------------
*/

int main()
{
    int num = 3;
    int *addr = &num;

    cout << "Number: " << num << endl;
    cout << "Address Pointer: " << addr << endl;
    cout << "Number from Pointer: " << *addr << endl;
}