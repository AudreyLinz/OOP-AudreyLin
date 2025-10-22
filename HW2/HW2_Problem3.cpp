#include <iostream>
using namespace std;

int evenCount(int value);

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << "The number of even digits is " << evenCount(num) << endl;
    return 0;
}

int evenCount(int value) {
    if (value == 0)
        return 1;

    int digit = value % 10;  // get last digit
    int count = (digit % 2 == 0) ? 1 : 0; //checks if it's even

    if (value / 10 == 0) {
        return count;
    }

    return count + evenCount(value / 10);  //recursive to find all even digits
}
