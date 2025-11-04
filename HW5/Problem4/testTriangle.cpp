#include "Triangle.h"
#include <iostream>

using namespace std;

int main() {
    Triangle t1(4.0, 4.0, 4.0);
    Triangle t2(5.0, 5.0, 2.0);
    Triangle t3(5.5, 5.5, 1.0);

    cout << "Triangle Information:" << endl;
    
    cout << "Triangle t1:" << endl;
    t1.display();
    cout << endl;

    cout << "Triangle t2:" << endl;
    t2.display();
    cout << endl;

    cout << "Triangle t3:" << endl;
    t3.display();
    cout << endl;

    cout << "Comparison Results:" << endl;

    cout << "t1 < t2: " << (t1 < t2 ? "True" : "False") << endl;
    cout << "t1 >= t2: " << (t1 >= t2 ? "True" : "False") << endl;
    cout << "t1 != t2: " << (t1 != t2 ? "True" : "False") << endl;
    cout << endl;

    cout << "t2 < t3: " << (t2 < t3 ? "True" : "False") << endl;
    cout << "t2 >= t3: " << (t2 >= t3 ? "True" : "False") << endl;
    cout << "t2 != t3: " << (t2 != t3 ? "True" : "False") << endl;
    cout << endl;

    Triangle t4(4.0, 4.0, 4.0); 
    cout << "t1 != t4: " << (t1 != t4 ? "True" : "False") << endl;

    return 0;
}