#pragma once
#include "Point.h"
using namespace Shapes_2D;

class ParentClass_Shapes2D
{
    public:

        virtual void Plot_Corrdinate() = 0;

        ParentClass_Shapes2D()
        {

        }

    protected:
        Point mandatory;

};
