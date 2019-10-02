//curveCut.h
#ifndef CURVECUT_H
#define CURVECUT_H


#include <iostream>
#include <iomanip>
#include "Point.h"
#include "Square.h"
#include "Rectangle.h"
#include "Shape.h"
#include "Circle.h"
#include <math.h>
#include <cstring>

class CurveCut: public Circle, public Rectangle{
    private:
        /* data */
    public:
        CurveCut(double x, double y, const char* name, double sideLength_a, double sideLength_b, double radius): Shape(x, y, name), Circle(x, y, name, radius), Rectangle(x, y, name, sideLength_a, sideLength_b){}
        ~CurveCut();

        double area();
        double perimeter();
        void display(){
            Shape::display();
            cout<<"Width: "<<side_a<<endl;
            cout<<"Length: "<<side_b<<endl;
            cout<<"Radius of the cut: "<<radius<<endl;
        }
    };

#endif