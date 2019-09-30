#include "Rectangle.h"
#include <iostream>
#include <iomanip>
#include "Point.h"
#include "Square.h"
#include "Shape.h"
#include <cstring>
Rectangle::~Rectangle(){

}
int main(){
    Point p(19.0, 4.0);
    Rectangle r(p, "ur mum", 12.0, 14.0);
    r.display();
}