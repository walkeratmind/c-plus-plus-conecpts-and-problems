#include <iostream>

using namespace std;

/*
------------------------------------------------------------
- title: Rectangle.cpp
- Author: Rakesh Niraula
- copyright (C) 2020. All rights reserved
- date: 2020-05-06 16:31:53
------------------------------------------------------------
*/

class Rectangle
{
private:
    int height, width;

public:
    Rectangle();
    Rectangle(int, int);
    ~Rectangle();

    int area() { return width * height; }
};

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int a, int b)
{
    width = a;
    height = b;
}

Rectangle::~Rectangle()
{
}

int main()
{
    Rectangle rect(4, 3);

    cout << "area: " << rect.area() << endl;
    return 0;
}
