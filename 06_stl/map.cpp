#include "iostream"
#include "map"

/*
------------------------------------------------------------
- title: map.cpp
- Author: Rakesh Niraula
- copyright (C) 2020. All rights reserved
- date: 2020-05-11 11:48:52
------------------------------------------------------------
*/

using namespace std;

int main()
{
    map<int, string> Student;

    // 1. assign using array index notation
    Student[1] = "Ramesh";
    Student[2] = "Shyamlal";
    Student[3] = "Kshitij";

    cout << "Student[3]: " << Student[3] << endl;

    for (map<int, string>::iterator itr = Student.begin(); itr != Student.end(); ++itr)
    {
        cout << (*itr).first << ": " << (*itr).second << endl;
    }

    return 0;
}