#include "callsSpace.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void Spaceship::setPosition(const string& direction){
        stringstream ss;
        ss << "x: " << x << ", y: " << y << ", direction: " << direction;
        position = ss.str();
    }
Spaceship::Spaceship(): x(0), y(0){
    setPosition("up");
}

Spaceship::Spaceship(const string& path) : x(0), y(0) {
        string direction = "up";
        for (char move : path){
            if(move == 'A'){
                if(direction == "up") y--;
                else if (direction == "down") y++;
                else if (direction == "right") x++;
                else x--;
            } else if (move == 'R'){
                if(direction == "up") direction = "right";
                else if(direction == "right") direction = "down";
                else if(direction == "down") direction = "left";
                else if(direction == "left") direction = "up";
            } else if (move == 'L'){
                if(direction == "up") direction = "left";
                else if(direction == "right") direction = "up";
                else if(direction == "down") direction = "right";
                else if(direction == "left") direction = "down";
            }
        }
        setPosition(direction);
    }

    string Spaceship::getPosition() const{
        return position;
    }