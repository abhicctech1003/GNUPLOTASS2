#pragma once
#include "Point.h"
#include "Shapes2D.h"
using namespace Shapes_2D;

class Triangle : public ParentClass_Shapes2D
{
    public:
        Triangle(Point inVertex1, Point inVertex2, Point inVertex3); // Constructor
         ~Triangle(); // Destructor

        void plotCorrdinate();

    private:
        // Member variabless
        float mHeight;
        float mBase;
        float mSide1;
        float mSide2;

        Point mVertex2;
        Point mVertex3;
  
};

