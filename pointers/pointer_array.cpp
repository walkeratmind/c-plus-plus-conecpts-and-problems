#include <iostream>

using namespace std;

/*
------------------------------------------------------------
- title: pointer_array.cpp
- Author: Rakesh Niraula
- copyright (C) 2020. All rights reserved
- date: 2020-05-07 08:13:24
------------------------------------------------------------
*/

int main()
{

    int *ptr;

    int marks[5] = {90, 70, 80, 40, 20};

    ptr = marks;

    cout << "Value of Ptr: " << *ptr << endl;
    cout << "Value of marks: " << *ptr << endl;

    for (int i = 0; i < 5; i++)
    {
        printf("Marks[%d]: %d\n", i, *(ptr + i));
    }
    return 0;
}