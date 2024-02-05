#include <iostream>
#include <fstream>
#include <cmath>
#include "../headers/Ellipse.h"
using namespace std;

Ellipse::Ellipse(Point o, Point mMajorRadius, Point mMinorRadius)
{
    mandatory = o;
    this->mMinorRadius = mMinorRadius;
    this->mMajorRadius = mMajorRadius;
}

Ellipse::~Ellipse()
{
    
}

// Writes the coordinates in Ellipse.txt
void Ellipse::Plot_Corrdinate()
{
    int points = 100;
    ofstream myFile("textfile/Ellipse.txt");

    if (myFile.is_open())
    {
        for(int i = 0; i < points; ++i)
        {
            double angle = 2.0 * M_PI * i / points;
            double x = mandatory.x() + mMajorRadius.x() * cos(angle);
            double y = mandatory.y() + mMinorRadius.y() * sin(angle);

            myFile << x << " " << y << " " << mMajorRadius.x() << " " << mMinorRadius.y() << std::endl;
        }
        myFile.close();
    }
}


