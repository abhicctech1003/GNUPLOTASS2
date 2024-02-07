#include <iostream>
#include <fstream>
#include "../headers/Triangle.h"
using namespace std;

Triangle::Triangle(Point inVertex1, Point inVertex2, Point inVertex3)
{
    mandatory = inVertex1;
    this-> mVertex2 = inVertex2;
    this-> mVertex3 = inVertex3;
}

Triangle::~Triangle()
{
    
}

// Writes the coordinates in Triangle.txt
void Triangle::plotCorrdinate()
{
    ofstream myfile("textfile/Triangle.txt");

    myfile << mandatory.x() << " " << mandatory.y() << endl;
    myfile << mVertex2.x() << " " << mVertex2.y() << endl;
    myfile << mVertex3.x() << " " << mVertex3.y() << endl;
    myfile << mandatory.x() << " " << mandatory.y() << endl;

    myfile.close();
}

