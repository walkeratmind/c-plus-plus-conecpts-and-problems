#include <iostream>

using namespace std;

/*
------------------------------------------------------------
- title: inheritence.cpp
- Author: Rakesh Niraula
- copyright (C) 2020. All rights reserved
- date: 2020-05-07 08:42:00
------------------------------------------------------------
*/

class Shape
{
private:
    float width, length, height;

public:
    Shape();
    Shape(float, float, float);
    ~Shape();
}

Shape::Shape()
{
}
Shape::Shape(float w, float l, float h)
{
    width = w;
    length = l;
    height = h;
}

main()
{

    return 0;
}