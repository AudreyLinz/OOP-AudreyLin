#include "MySet.h"
#include <iostream>

using namespace std;

int main() {
    MySet s1(20); 

    s1.insertElement(13);
    s1.insertElement(7);
    s1.insertElement(20);
    s1.insertElement(21); // Should print warning

    s1.printSet(); // Expected: {7, 13, 20}

    s1.deleteElement(22); // Should print warning
    s1.deleteElement(13);

    s1.printSet(); // Expected: {7, 20}

    MySet s2(100);

    s2.printSet(); // Expected: {---}


    MySet s3 = s1;

    cout << "s3.isEqualTo(s) = " << s3.isEqualTo(s1) << endl; 

    return 0; 
}