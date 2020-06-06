#include <iostream>

using namespace std;

/*
------------------------------------------------------------
- title: function_object.cpp
- Author: Rakesh Niraula
- copyright (C) 2020. All rights reserved
- date: 2020-05-07 09:34:19
------------------------------------------------------------
*/

class function_object
{
private:
public:
    function_object();
    ~function_object();

    int operator()(int, int);
};

function_object::function_object()
{
}

function_object::~function_object()
{
}

int function_object::operator()(int a, int b)
{
    return a + b;
}

int main()
{
    function_object f;

    int result = f(4, 9);

    cout << "Result: " << result << endl;
}