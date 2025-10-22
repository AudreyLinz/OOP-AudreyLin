#ifndef MYSET_H
#define MYSET_H

#include <iostream>
#include <stdexcept> // For range checks

class MySet {
private:
    unsigned int range;
    size_t size;
    bool *set;

public:
    MySet(unsigned int initialRange);

    MySet(const MySet &other);

    ~MySet();

    MySet& operator=(const MySet &other);

    void insertElement(int k);
    void deleteElement(int m);

    void printSet() const;
    bool isEqualTo(const MySet &otherSet) const;
};

#endif // MYSET_H