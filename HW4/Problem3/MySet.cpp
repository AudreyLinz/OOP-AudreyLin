#include "MySet.h"
#include <iostream>

using namespace std; // Using namespace std as requested

MySet::MySet(unsigned int initialRange) : range(initialRange), size(0) {
    set = new bool[range + 1];
    for (unsigned int i = 0; i <= range; ++i) {
        set[i] = false;
    }
}

MySet::MySet(const MySet &other) : range(other.range), size(other.size) {
    set = new bool[range + 1];
    for (unsigned int i = 0; i <= range; ++i) {
        set[i] = other.set[i];
    }
}

MySet::~MySet() {
    delete[] set;
    set = nullptr;
}

MySet& MySet::operator=(const MySet &other) {
    if (this != &other) {
        delete[] set;
        range = other.range;
        size = other.size;
        set = new bool[range + 1];
        for (unsigned int i = 0; i <= range; ++i) {
            set[i] = other.set[i];
        }
    }
    return *this;
}

void MySet::insertElement(int k) {
    if (k >= 0 && k <= (int)range) {
        if (!set[k]) {
            set[k] = true;
            size++;
        }
    } else {
        cout << "Invalid insert attempted for the number " << k << "!\n";
    }
}

void MySet::deleteElement(int m) {
    if (m >= 0 && m <= (int)range) {
        if (set[m]) {
            set[m] = false;
            size--;
        }
    } else {
        cout << "Invalid delete attempted for the number " << m << "!\n";
    }
}

void MySet::printSet() const {
    cout << "{";
    if (size == 0) {
        cout << "---"; 
    } else {
        bool first = true;
        for (unsigned int i = 0; i <= range; ++i) {
            if (set[i]) {
                if (!first) {
                    cout << ", ";
                }
                cout << i;
                first = false;
            }
        }
    }
    cout << "}\n";
}

bool MySet::isEqualTo(const MySet &otherSet) const {
    if (range != otherSet.range) return false;
    if (size != otherSet.size) return false;
    for (unsigned int i = 0; i <= range; ++i) {
        if (set[i] != otherSet.set[i]) return false;
    }
    return true;
}