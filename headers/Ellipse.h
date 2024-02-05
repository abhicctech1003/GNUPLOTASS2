#pragma once
#include "Shapes2D.h"
using namespace Shapes_2D;

class Ellipse: public ParentClass_Shapes2D
{
    public:
        Ellipse(Point o, Point MajorRadius, Point MinorRadius); // Constructor
        ~Ellipse(); // Destructor
        
        void Plot_Corrdinate();

    private:
        // Member variables
        Point mMinorRadius;
        Point mMajorRadius;
};
