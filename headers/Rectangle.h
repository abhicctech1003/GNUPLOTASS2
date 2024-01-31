#pragma once 
#include "Point.h"
#include "Shapes2D.h"

using namespace Shapes_2D;

class Rectangle : public ParentClass_Shapes2D
{
    private:
        Point mDiagonal;

    public:
        Rectangle(Point d1, Point d2);
        ~Rectangle();
        void Plot_Corrd();
};

