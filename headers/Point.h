#pragma once

namespace Shapes_2D
{
    class Point
    {
        public: 
            Point(); // Constructor
            ~Point(); // Destructor
            Point(double x, double y);

            double x();
            double y();

        private:
            // Member variables
            double mX;
            double mY; 
               
    };
}
