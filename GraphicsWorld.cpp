#include "GraphicsWorld.h"
#include <iostream>
#include <iomanip>

using namespace std;

voidGraphicsWorld::run(){
    #if 0
    // Change 0 to 1 to test Point
    Pointm (6, 8);
    Pointn (6,8);
    n.setx(9);
    cout<< "\nExpected to dispaly the distance between m and n is: 3";
    cout<< "\nThe distance between m and n is: "<<m.distance(n);
    cout<< "\nExpected second version of the distance function also print: 3";
    cout<< "\nThe distance between m and n is again: "<<Point::distance(m, n);
    #endif             
    // end of block to test Point
    #if 0// Change 0 to 1 to test Square
    cout<< "\n\nTesting Functions in class Square:"<<endl;
    Squares(5, 7, 12, "SQUARE -S");
    s.display();
    #endif             // end of block to test Square#if 0// Change 0 to 1 to test Rectanglecout<< "\nTesting Functions in class Rectangle:";Rectanglea(5, 7, 12, 15, "RECTANGLE A");a.display();