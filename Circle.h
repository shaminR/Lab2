#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <iomanip>
#include "Point.h"
#include "Square.h"
#include "Shape.h"
#include <math.h>
#include <cstring>
using namespace std;

class Circle: virtual public Shape{
protected: 
    double radius;
public:
    Circle (double x, double y, const char* name, double rad): Shape(x, y, name), radius(rad){}
    ~Circle();
    void display(){
            Shape::display();
            cout<<"Radius "<< radius << endl;
            cout<<"Area: "<<area()<<endl;
            cout<<"Perimeter: "<<perimeter()<<endl;
        }
    double area(){return M_PI * radius * radius;}
    double perimeter(){return  (2 * M_PI * radius);}
    double getRadius(){return radius;}
    void setRadius(double rad){radius = rad;}
};

#endif