#ifndef CALLSSPACE_H
#define CALLSSPACE_H

#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class Spaceship{
private:
    int x;
    int y;
    string position;

    void setPosition(const string& direction);
public:
    Spaceship();

    Spaceship(const string& path);

    string getPosition() const;
};

#endif