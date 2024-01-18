#include "Circle.h"
#include <iostream>
Circle::Circle (double r) {
 setRadius(r);
}
double Circle::getRadius() {
    std::cout << "Hello World" <<std::endl;
 return radius;
}
void Circle::setRadius(double r) {
 if ( r < 0 ) std::cerr << 
   "Radius cannot be negative\n";
 radius = r;
}
