#pragma once
#include "Point.h"
#include "Shapes2D.h"

class Line :public ParentClass_Shapes2D
{
     private:
        Point d2;
        
    public:
        Line(Point d1 , Point d2);
        ~Line();
 
    void Plot_Corrd();

   
};

