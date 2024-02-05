#pragma once
#include "Point.h"
#include "Shapes2D.h"
using namespace Shapes_2D;

class Triangle : public ParentClass_Shapes2D
{
    public:
        Triangle(Point mVertex1, Point mVertex2, Point mVertex3); // Constructor
         ~Triangle(); // Destructor

        void Plot_Corrdinate();

    private:
        // Member variabless
        float height;
        float base;
        float side1;
        float side2;

        Point mVertex2;
        Point mVertex3;
  
};

