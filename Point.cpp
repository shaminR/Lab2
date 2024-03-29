#include <iostream>
#include <iomanip>
#include <math.h>
#include "Point.h"
using namespace std;

int Point::count = 1001;

double Point::distance(const Point& other)const{
    double xDist = this->x - other.x;
    xDist *= xDist;
    double yDist = this->y - other.y;
    yDist *= yDist;
    return sqrt(xDist + yDist);
}

double Point::distance(const Point& first, const Point& second){
    double xDist = first.x - second.x;
    xDist *= xDist;
    double yDist = first.y - second.y;
    yDist *= yDist;
    return sqrt(xDist + yDist);
}

Point& Point::operator =(const Point& rhs){

    if(this != &rhs){
        this->x = rhs.x;
        this->y = rhs.y;
    }
    return *this;
}

// int main(void){
//     Point p(2.0, 2.0);
//     Point p2(0.0, 0.0);
//     Point p3(9.0, 2.0);

//     int yuh = p3.counter();

//     cout<<yuh<<endl;

//     return 0;
// }