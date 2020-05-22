#include <iostream>
#include <deque>

using namespace std;

/*
------------------------------------------------------------
- title: dequeue.cpp
- Author: Rakesh Niraula
- copyright (C) 2020. All rights reserved
- date: 2020-05-08 12:48:49
------------------------------------------------------------
*/

int main()
{

    deque<string> waiting_list;

    waiting_list.push_back("Shivaram");
    waiting_list.push_back("Laxmi");
    waiting_list.push_front("Manoj");

    for (deque<string>::iterator itr = waiting_list.begin(); itr != waiting_list.end(); itr++)
    {
        cout << *itr << endl;
    }

    cout << "Waiting List: " << waiting_list.at(3) << endl;

    return 0;
}