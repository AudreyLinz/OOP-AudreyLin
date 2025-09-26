#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num = 0;
    cout << "Enter an integer number to see if the given number is divisible by 4 or not: ";
    cin >> num;
    if (num < 0){
        cout << "The program does not accept negative numbers" << endl;
    } else if(num<100 && num>=0){
        int quotient = num/4;
        int remainder = num%4;
        if((num%4)==0){
            cout << "The given number (" << num << ") is divisible by 4" << endl;
            cout << "Quotient: " << quotient << " and Remainder: " << remainder << endl;
        } else {
            cout << "The given number (" << num << ") is not divisible by 4" << endl;
            cout << "Quotient: " << quotient << " and Remainder: " << remainder << endl;
        }

    } else {
        int squareRoot = sqrt(num);
        cout << "The number entered is greater than 100 and the square root of the number is " << squareRoot << endl;
    }
    return 0;
}