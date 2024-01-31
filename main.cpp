#include <iostream>
#include "./headers/Line.h"
#include "./headers/Triangle.h"
#include "./headers/Square.h"
#include "./headers/Rectangle.h"
#include "./headers/Circle.h"
#include "./headers/Ellipse.h"

using namespace std;
using namespace Shapes_2D;

int main()
{
    // Continous loop
    while(1)
    {
        cout << "Select one of following shape to get geometric dimensions" << endl;
        cout << "(1) Line" << endl
             << "(2) Triangle" << endl
             << "(3) Square" << endl
             << "(4) Rectangle" << endl
             << "(5) Circle" << endl
             << "(6) Ellipse" << endl
             << "(7) Exit" << endl;

        // Variable declarations
        int Shape;
        cin >> Shape;

        switch (Shape)
        {
        // Line
        case 1:
            {
            cout <<"You have selected Line"<<endl;
            cout<<"Give two point coordinates"<<endl;
            double x1,y1,x2,y2;
            cin>>x1>>y1>>x2>>y2;

            Point d1(x1,y1);
            Point d2(x2,y2);

            Line l1(d1,d2);

            l1.Plot_Corrd();
            cout<<endl;
            break;
            }

        // Triangle
        case 2:
            {
           cout<< "You have selected Triangle" <<endl;
           double x1,y1,x2,y2,x3,y3;
           cout<<"Give three point coordinates"<<endl;
           cin>>x1>>y1>>x2>>y2>>x3>>y3;

            Point d1(x1,y1) ;
            Point d2(x2,y2) ;
            Point d3(x3,y3);
           
           Triangle t1(d1,d2,d3); 
           t1.Plot_Corrd();
       
           break;
            }

        // Square
        case 3:
            {
            cout <<"You have selected Square"<<endl;
            cout<<"Give the length"<<endl;
            double mlength;
            cin>>mlength;

            Square s1(mlength);

            s1.Plot_Corrd();
            cout<<endl;
            break;
            }

        // Rectangle
        case 4:
            {
            cout<< "You have selected Rectangle" <<endl;
            double x1,y1,x2,y2;
            cout<<"Give two point coordinates"<<endl;
            cin>>x1>>y1>>x2>>y2;

            Point d1(x1,y1) ;
            Point d2(x2,y2) ;
           
            Rectangle r1(d1,d2); 
            r1.Plot_Corrd();
             
            break;
            }

        // Circle
        case 5:
            {
            cout << "You have selected Circle" << endl;
            double x1,y1,radius;
            cout<<"Give the radius center point coordinates"<<endl;
            cin>>x1>>y1>>radius;
            
            Point d1(x1,y1);

            Circle c1(d1,radius);

            c1.Plot_Corrd();
            break;
            }

        // Ellipse
        case 6:
            {
            cout <<"You have selected Ellipse"<<endl;
            cout<<"Give the three point coordinates"<<endl;
            double x1,y1,x2,y2,x3,y3;
            cin>>x1>>y1>>x2>>y2>>x3>>y3;

            Point d1(x1,y1);
            Point d2(x2,y2);
            Point d3(x3,y3);

            Ellipse e1(d1,d2,d3);

            e1.Plot_Corrd();

            cout<<endl;
            break;
            }

        case 7:
            exit(1);
            break;
        
        default:
            cout << "Invalid selection for shape"; 
            break;
        }
        
    }

    return(0);
}
