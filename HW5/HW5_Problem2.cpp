#include <iostream>
#include <string>

using namespace std;

template<typename T>
T getMin(const T array [], int size) {
    T minElement = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < minElement) {
            minElement = array[i];
        }
    }
    return minElement;
}


template<typename T>
T getMax(const T array [], int size) {
    T maxElement = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > maxElement) {
            maxElement = array[i];
        }
    }
    return maxElement;
}

template<typename T>
bool isGreater (const T list1[], const T list2[], int size1, int size2) {
    T min_list2 = getMin(list2, size2);
    T max_list1 = getMax(list1, size1);

    return min_list2 > max_list1;
}

int main() {
    int i_list1[] = {1, 5, 3};      // max = 5
    int i_list2[] = {10, 8, 12};    // min = 8
    cout << "Test 1 (int): " << (isGreater(i_list1, i_list2, 3, 3) ? "True" : "False") << endl; // 8 > 5 -> True

    int i_list3[] = {1, 5, 10};     // max = 10
    int i_list4[] = {8, 12, 15};    // min = 8
    cout << "Test 2 (int): " << (isGreater(i_list3, i_list4, 3, 3) ? "True" : "False") << endl; // 8 > 10 -> False

    double d_list1[] = {0.1, 1.0, 0.5}; // max = 1.0
    double d_list2[] = {1.1, 2.0, 1.5}; // min = 1.1
    cout << "Test 3 (double): " << (isGreater(d_list1, d_list2, 3, 3) ? "True" : "False") << endl; // 1.1 > 1.0 -> True

    string s_list1[] = {"Apple", "Banana", "Cat"}; // max = "Cat"
    string s_list2[] = {"Dog", "Elephant", "Fox"}; // min = "Dog"
    cout << "Test 4 (string): " << (isGreater(s_list1, s_list2, 3, 3) ? "True" : "False") << endl; // "Dog" > "Cat" -> True

    return 0;
}