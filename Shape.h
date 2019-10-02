//shape .h
//shamin rahman

#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <iomanip>
#include "Point.h"
#include <cstring>
using namespace std;

class Shape{
    protected:    
        Point origin;
        char* shapeName;
    public:
        Shape(double x, double y, const char* name):origin(Point(x, y)), shapeName(0){
            shapeName = new char[(int)strlen(name) + 1];
            strcpy(shapeName, name);
        }
        ~Shape();
        void move(double dx, double dy);
        Shape(const Shape& source);
        Shape& operator=(const Shape& rhs);

        const Point& getOrigin()const{return origin;}
        const char* getName()const{return shapeName;}
        virtual void display() = 0;
        double distance (const Shape& other)const;
        static double distance (Shape& the_shape, Shape& other);
};

#endif