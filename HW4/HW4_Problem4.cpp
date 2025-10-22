#include <iostream>
#include <numeric>
#include <vector>  // Using std::vector for input flexibility

using namespace std;

int average(const int* array, int size) {
    if (size <= 0) return 0;
    
    long long sum = 0; // Use long long to prevent overflow during summation
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    // Integer division truncates the result, as required by the int return type
    return (int)(sum / size); 
}

double average(const double* array, int size) {
    if (size <= 0) return 0.0;

    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum / size;
}

int main() {
    const int count = 10;
    vector<double> doubleValues(count);

    cout << "Please enter ten double values:\n";
    for (int i = 0; i < count; ++i) {
        cout << "Enter value " << (i + 1) << ": ";
        cin >> doubleValues[i];
    }

    double avg_value = average(doubleValues.data(), count);

    cout << endl;
    
    cout.precision(4); 
    cout << "The average (double) value is: " << fixed << avg_value << endl;

    int intArray[] = {5, 10, 15};
    int intAvg = average(intArray, 3);
    cout << "The average of {5, 10, 15} (int) is: " << intAvg << endl;

    return 0;
}