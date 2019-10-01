#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include <iomanip>
#include "Point.h"
#include "Shape.h"
#include <cstring>
using namespace std;

class Square: public Shape{
    protected:
        double side_a;
    public:
        Square(const Point& o, const char* name, double sideLength): Shape(o, name), side_a(sideLength){}
        ~Square();

        double area(){return side_a * side_a;}
        double perimeter(){return 4 * side_a;}
        void display(){
            Shape::display();
            cout<<"Side a: "<<side_a<<endl;
            cout<<"Area: "<<area()<<endl;
            cout<<"Perimeter: "<<perimeter()<<endl;
        }
        double getSideLength(){return side_a;}
        void setSideLength(double side){side_a = side;}
};

#endif