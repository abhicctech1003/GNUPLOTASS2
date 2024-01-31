#include "../headers/Circle.h"
#include <iostream>
#include <fstream>
#include<cmath>

using namespace std;
using namespace Shapes_2D;

Circle::Circle(Point o, double r)
{
    mandatory = o;
    mRadius = r;
}

void Circle::Plot_Corrd()
{
    ofstream myFile("textfile/Circle.txt");
    int points = 100;
    if (myFile.is_open())
    {
        for (int i = 0; i < points; ++i)
        {
            double angle = 2.0 * M_PI * i / points;
            double x = mandatory.x() + mRadius * cos(angle);
            double y = mandatory.y() + mRadius * sin(angle);
            
            myFile << x << " " << y << " " << mRadius << endl;
        }
        myFile.close();
    }
}

Circle::~Circle()
{

}
