#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <iomanip>
#include "Point.h"
#include "Square.h"
#include "Shape.h"
#include <cstring>
using namespace std;

class Rectangle: public Square{
    private:
        double side_b;
    public:
        Rectangle(const Point& o, const char* name, double sideLength_a, double sideLength_b): Square(o, name, sideLength_a), side_b(sideLength_b){}
        ~Rectangle();
        void display(){
            Shape::display();
            cout<<"Side a: "<< side_a << endl;
            cout<<"Side b: "<< side_b << endl;
        }
};


#endif