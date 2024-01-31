#pragma once
#include "Point.h"
#include "Shapes2D.h"

using namespace Shapes_2D;

class Triangle : public ParentClass_Shapes2D
{
    private:
        float height;
        float base;
        float side1;
        float side2;

        Point mVertex2;
        Point mVertex3;

    public:
        Triangle(Point mVertex1, Point mVertex2, Point mVertex3);
        void Plot_Corrd();
        ~Triangle();
        
};
