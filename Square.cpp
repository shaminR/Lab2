//square.cpp
#include <iostream>
#include <iomanip>
#include <math.h>
#include <string.h>
#include "Shape.h"
#include "Point.h"
#include "Square.h"
using namespace std;

Square::~Square(){
    
}

int main(){
    Point p2(19.0, 4.0);
    
    // Shape s (p, "YUHH");

    Square p(p2, "sqyarer", 6.9);
    const char* nam  = p.getName();
    cout<<nam<<endl;
    return 0;
}