#pragma once
#include "Shapes2D.h"

using namespace Shapes_2D;

class Ellipse: public ParentClass_Shapes2D
{
    private:
        Point mMinorRadius;
        Point mMajorRadius;

    public:
        Ellipse(Point o, Point MajorRadius, Point MinorRadius);
         ~Ellipse();
        
        void Plot_Corrd();
};
