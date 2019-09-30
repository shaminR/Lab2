//shape.cpp
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string.h>
#include "Shape.h"
#include "Point.h"
using namespace std;

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

Shape::~Shape(){
    delete[] shapeName;
}
Shape::Shape(const Shape& source):origin(source.origin), shapeName(0){
    if(shapeName== NULL){
        cerr<< "Memory not available...";
        exit(1);
    }
    shapeName = new char[(int)strlen(source.shapeName) + 1];
    strcpy(shapeName, source.shapeName);
}

Shape& Shape::operator=(const Shape& rhs){
    if(this==&rhs)
        return*this;
    delete[] shapeName;
    shapeName = new char[strlen(rhs.shapeName)+1];
    if(shapeName== NULL){
        cerr<< "Memory not available...";exit(1);
    }
    strcpy(shapeName, rhs.shapeName);
    origin= rhs.origin;return*this;
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

