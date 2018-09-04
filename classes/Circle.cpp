#include "Circle.h"
#include <iostream>

using namespace std;

void Circle::set_radius(float radius) {
    _radius = radius; 
}

float Circle::get_area() { 
    return PI * _radius * _radius;
}
