#include "Triangle.h"
#include <cmath> // For sqrt

using namespace std;

// No-arg constructor implementation
Triangle::Triangle() : side1(1.0), side2(1.0), side3(1.0) {
    // Default triangle
}

// Constructor with specified sides implementation
Triangle::Triangle(double s1, double s2, double s3)
    : side1(s1), side2(s2), side3(s3) {
}

// getPerimeter implementation
double Triangle::getPerimeter() const {
    return side1 + side2 + side3;
}

// getArea implementation
double Triangle::getArea() const {
    double s = getPerimeter() / 2.0;
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

// display implementation
void Triangle::display() const {
    cout << "Sides: " << side1 << ", " << side2 << ", " << side3 << endl;
    cout << "Perimeter: " << getPerimeter() << endl;
    cout << "Area: " << getArea() << endl;
}

bool Triangle::operator<(const Triangle& other) const {
    return getArea() < other.getArea();
}

bool Triangle::operator>=(const Triangle& other) const {
    return !(*this < other); 
}

bool Triangle::operator!=(const Triangle& other) const {
    return getArea() != other.getArea();
}