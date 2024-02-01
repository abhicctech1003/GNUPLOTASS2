#include <iostream>
#include<cmath>
#include <fstream>
#include "../headers/Square.h"
using namespace std;

Square::Square(int mlength) 
{
     this->mlength=mlength;
}

Square::~Square()
{
    
}

void  Square::Plot_Corrd()
{
        ofstream myfile("textfile/Square.txt");

        myfile << 0 << " " << 0 << endl;
        myfile << mlength << " " << 0 << endl;
        myfile << mlength << " " <<mlength << endl;
        myfile << 0 << " " << mlength << endl;
        myfile << 0 << " " << 0 << endl;

        myfile.close();
}



