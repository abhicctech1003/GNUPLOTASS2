#include <iostream>
#include<cmath>
#include<fstream>  

#include "../headers/Line.h"

using namespace std;

Line::Line(Point d1,Point d2)
{
   mandatory=d1;
   this->d2=d2;
}

void Line::Plot_Corrd()
{
    ofstream myFile("textfile/Line.txt");
 
    myFile << mandatory.x() << " " << mandatory.y() <<endl;
    myFile << d2.x() << " " <<d2.y() <<endl;
}

Line::~Line()
{

}