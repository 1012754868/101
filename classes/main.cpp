#include <iostream> // include the class header file in main
#include "Circle.h"

using namespace std;

int main() {
    cout << "Enter circle radius (in metres): ";
    float radius;
    cin >> radius; // create a circle object and use the public methods
    Circle circle;
    circle.set_radius(radius);
    float area = circle.get_area();
    cout << "The circle has an area of " << area << " m^2.\n";

    system("pause");
    return 0;
}
