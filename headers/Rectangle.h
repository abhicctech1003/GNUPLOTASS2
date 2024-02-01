#pragma once 
#include "Point.h"
#include "Shapes2D.h"
using namespace Shapes_2D;

class Rectangle : public ParentClass_Shapes2D
{
    public:
        Rectangle(Point d1, Point d2); // Constructor
        ~Rectangle(); // Destructor
        void Plot_Corrdinate();

    private:
        Point mDiagonal;

};

