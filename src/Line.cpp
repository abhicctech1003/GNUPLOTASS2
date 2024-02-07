#include <iostream>
#include<cmath>
#include<fstream>  
#include "../headers/Line.h"
using namespace std;

Line::Line(Point d1,Point d2)
{
   mandatory=d1;
   this->mD2=d2;
}

Line::~Line()
{

}

// Writes the coordinates in Line.txt
void Line::plotCorrdinate()
{
    ofstream myFile("textfile/Line.txt");
 
    myFile << mandatory.x() << " " << mandatory.y() <<endl;
    myFile << mD2.x() << " " <<mD2.y() <<endl;
}


