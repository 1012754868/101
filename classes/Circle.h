#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>

#define PI 3.14159265

using namespace std;

class Circle {
 public:
  // only accessors and mutators are public in this example
  void set_radius(float radius);
  float get_area();
 private:
  // member variables are private and set/get via accessor/mutator
  float _radius;
  float _area;
};

#endif
