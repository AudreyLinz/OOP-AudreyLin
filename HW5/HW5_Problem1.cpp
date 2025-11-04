#include <iostream>
#include <string>

using namespace std;

template<typename T>
T getMin(const T array [], int size) {
    T minElement = array[0]; // Initialize with the first element
    
    // Iterate starting from the second element
    for (int i = 1; i < size; ++i) {
        if (array[i] < minElement) {
            minElement = array[i];
        }
    }
    return minElement;
}

int main() {
    // Test with int array
    int i_array[4] = {1, 3, -3, 80};
    cout << getMin(i_array, 4) << endl;

    // Test with double array
    double d_array[4] = {1.57, 3.14159, -360.0, 0.0};
    cout << getMin(d_array, 4) << endl;

    // Test with string array (lexicographical comparison)
    string s_array[4] = {"abcd", "ab", "Adad", "Cat"};
    cout << getMin(s_array, 4) << endl;

    return 0;
}