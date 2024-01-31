#pragma once
#include "Point.h"
#include "Shapes2D.h"

using namespace Shapes_2D;

class Circle :public ParentClass_Shapes2D
{
    private:
        float mRadius;
        
    public:
        Circle(Point o, double r);
        ~Circle();

        void Plot_Corrd();

    

};
