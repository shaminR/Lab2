#include <iostream>
#include <iomanip>
#include "Point.h"
#include "CurveCut.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Square.h"
#include "Shape.h"


double CurveCut::area(){
    double rectA = side_b * side_a;
    double quarter = Circle::area() / 4.0;
    return rectA - quarter;
}

double CurveCut::perimeter(){
    double rectP = Rectangle::perimeter() - 2.0 * radius;
    double circleP = Circle::perimeter() / 4.0;
    return rectP + circleP;
}

CurveCut::~CurveCut(){}

// int main(){
//     CurveCut c(1.0, 2.0, "nameyuh", 4.0, 6.0, 1.0);
//     c.display();

//     return 0;
// }