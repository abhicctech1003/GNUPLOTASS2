#include <iostream>
#include <cmath>
#include <fstream>
#include "../headers/Rectangle.h"
using namespace std;
using namespace Shapes_2D;

Rectangle::Rectangle(Point d1, Point d2)
{
    mandatory = d1;
    mDiagonal = d2;
}

Rectangle::~Rectangle()
{

}

// Writes the coordinates in Rectangle.txt
void Rectangle::plotCorrdinate()
{
    ofstream myfile("textfile/Rectangle.txt");

    myfile << mandatory.x() << " " << mandatory.y() << endl;
    myfile << mDiagonal.x() << " " << mandatory.y() << endl;
    myfile << mDiagonal.x() << " " << mDiagonal.y() << endl;
    myfile << mandatory.x() << " " << mDiagonal.y() << endl;
    myfile << mandatory.x() << " " << mandatory.y() << endl;

    myfile.close();
}

