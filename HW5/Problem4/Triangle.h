#include <iostream>

using namespace std;

class Triangle {
private:
    double side1;
    double side2;
    double side3;

public:
    // No-arg constructor
    Triangle();

    // Constructor with specified sides
    Triangle(double s1, double s2, double s3);

    // Constant function to return the perimeter
    double getPerimeter() const;

    // Constant function to return the area
    double getArea() const;

    // Constant function to display triangle information
    void display() const;

    // Relational Operators
    bool operator<(const Triangle& other) const;
    bool operator>=(const Triangle& other) const;
    bool operator!=(const Triangle& other) const;
};