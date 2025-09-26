#include <iostream>
using namespace std;

int main() {
    int num = 0;
    cout << "Enter an integer between 0 and 1000000: ";
    cin >> num;

    int result = 0;
    while (num > 0) {
        result += num % 10;
        num /= 10;
    }

    cout << "The sum of the digits is " << result << "." << endl;
    return 0;
}
