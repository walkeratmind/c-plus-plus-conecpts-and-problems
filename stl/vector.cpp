#include <iostream>
#include <vector>

using namespace std;

/*
------------------------------------------------------------
- title: vector.cpp
- Author: Rakesh Niraula
- copyright (C) 2020. All rights reserved
- date: 2020-05-07 09:38:43
------------------------------------------------------------
*/

int main()
{
  vector<string> names;

  names.push_back("Harihar");
  names.push_back("Binod");
  names.push_back("Raman");
  names.push_back("Shyam Prashad");
  names.push_back("Rita");

  int i = 0;
  for (vector<string>::iterator itr = names.begin(); itr != names.end(); itr++)
  {

    cout << *itr << endl;

    // OR
    cout << "Name:" << *(names.data() + i++) << endl;
  }

  cout << "--------------" << endl;
  cout << *names.crbegin() << endl;

  return 0;
}