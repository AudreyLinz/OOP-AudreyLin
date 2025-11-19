#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.pop_back();

    cout << "Size: " << v.size() << endl;        // 👉 2
    cout << "Capacity: " << v.capacity() << endl; // 👉 could be 2, 4, or more
    return 0;
}