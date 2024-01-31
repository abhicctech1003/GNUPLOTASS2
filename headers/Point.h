#pragma once

namespace Shapes_2D
{
    class Point
    {
        private:
            double mX;
            double mY; 
            
        public: 
            Point();
            Point(double x, double y);
            ~Point();

            double x();
            double y();

           
    };
}
