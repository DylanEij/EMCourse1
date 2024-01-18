//
// Created by Dylan Eijkelhof on 18/01/2024.
//

#include "Circle.h"
#include <iostream>

Circle::Circle (double r) {
    setRadius(r);
}

double Circle :: getRadius () {
    return radius;
}

void Circle::setRadius(double r) {
    if ( r < 0 ) {
        std::cerr << "Radius cannot be negative\n";
    }
    radius = r ;
}