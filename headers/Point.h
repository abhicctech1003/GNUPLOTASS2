#pragma once

namespace Shapes_2D
{
    class Point
    {
        public: 
            Point(); // Constructor
            Point(double x, double y);
            ~Point(); // Destructor

            double x();
            double y();

        private:
            double mX;
            double mY; 
               
    };
}
