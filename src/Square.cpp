#include <iostream>
#include<cmath>
#include <fstream>
#include "../headers/Square.h"
using namespace std;

Square::Square(int mLength) 
{
     this->mLength=mLength;
}

Square::~Square()
{
    
}

// Writes the coordinates in Square.txt
void  Square::Plot_Corrd()
{
        ofstream myfile("textfile/Square.txt");

        myfile << 0 << " " << 0 << endl;
        myfile << mLength << " " << 0 << endl;
        myfile << mLength << " " <<mLength << endl;
        myfile << 0 << " " << mLength << endl;
        myfile << 0 << " " << 0 << endl;

        myfile.close();
}



