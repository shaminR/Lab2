
#include "CurveCut.h"

double CurveCut::area(){
    double rectA = side_b * side_a;
    double quarter = Circle::area() / 4.0;
    return rectA - quarter;
}

double CurveCut::perimeter(){
    double rectP = Rectangle::perimeter() - 2.0 * radius;
    double circleP = Circle::perimeter() / 4.0;
    return rectP - circleP;
}

CurveCut::~CurveCut(){}