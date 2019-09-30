//shape.cpp
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string.h>
#include "Shape.h"
#include "Point.h"
using namespace std;

Shape::~Shape(){
    delete shapeName;
}

void Shape::display()const{
    cout<<endl<<"Shape Name: "<<shapeName;
    this->origin.display();
}

double Shape::distance (const Shape& other)const{
    double ans =  this->origin.distance(other.origin);
    return ans;
}
double Shape::distance (Shape& the_shape, Shape& other){
    return Point::distance(the_shape.origin, other.origin);
}

int main(){
    Point p(2.0, 2.0);
    Point p2(19.0, 4.0);
    
    Shape s (p, "YUHH");
    Shape s1 (p2, "YUHH");
    // s.display();
    cout<<Shape::distance(s, s1);
    return 0;
}

