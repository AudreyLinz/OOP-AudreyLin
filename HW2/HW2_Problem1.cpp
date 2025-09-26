#include<iostream>

using namespace std;

int main(){ //problem 1:
    long value1 = 200000;
    long value2;
    //a
    long* lPtr;
    //b
    lPtr = &value1;
    //c
    cout << *lPtr << endl;
    //d
    value2 = *lPtr;
    //e
    cout << value2 << endl;
    //f
    cout << &value1 << endl;
    //g
    cout << lPtr << endl; // yes this address prints as the same address for value1
    return 0;
}
