#pragma once
#include "Point.h"
#include "Shapes2D.h"

class Line :public ParentClass_Shapes2D
{
    public:
        Line(Point d1 , Point d2); // Constructor
        ~Line(); // Destructor
 
        void plotCorrdinate();

    private:
        // Member variables
        Point mD2;
        
};

