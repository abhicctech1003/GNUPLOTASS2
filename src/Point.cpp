#include "../headers/Point.h"
#include <iostream>
using namespace Shapes_2D;

Point::Point()
{
    mX = 0.0;
    mY = 0.0;
}

Point::~Point()
{

}

// Assigns x & y values
Point::Point(double x, double y)
{
    mX = x;
    mY = y;
}

// Returns x value
double Point::x()
{
    return mX;
}

// Returns y value
double Point::y()
{
    return mY;
}


