#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double side = 0;
    cout << "Enter the side: ";
    cin >> side;
    double PI = 3.14159265358979323846;
    double area = ((6*(pow(side, 2)))/(4*tan(PI/6)));
    area = round(area * 100)/100;
    cout << "The area of the hexagon is " << area << endl;
    return 0;
}