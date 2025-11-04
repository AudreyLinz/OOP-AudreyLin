#include "callsSpace.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(void){
    Spaceship astrochuckler;
    cout << astrochuckler.getPosition() << endl; // {x: 0, y: 0, direction: 'up'}

    Spaceship lunacycle("RAALALL");
    cout << lunacycle.getPosition() << endl; // {x: 2, y: -1, direction: 'down'}

    Spaceship quirkonaut("AAAARAARLAAAARAAARRAAAALLLA");
    cout << quirkonaut.getPosition() << endl; // {x: 7, y: -5, direction: 'right'}

    Spaceship zanyverse("");
    cout << zanyverse.getPosition() << endl; // {x: 0, y: 0, direction: 'up'}

    Spaceship cosmocomedy("LAAA");
    cout << cosmocomedy.getPosition() << endl; // {x: -3, y: 0, direction: 'left'}
    return 0;
}