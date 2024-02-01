#pragma once
#include "Point.h"
#include "Shapes2D.h"
using namespace Shapes_2D;

class Circle :public ParentClass_Shapes2D
{
    public:
        Circle(Point o, double r); // Constructor
        ~Circle(); // Destructor

        void Plot_Corrdinate();

    private:
        float mRadius;
};
