#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class Spaceship {
private:
    int x; 
    int y; 
    string position; // Format: "{x: X, y: Y, direction: 'DIRECTION'}"

    // Helper to format and update the position string
    void updatePositionString(const string& direction) {
        stringstream ss;
        // The output format requires specific spacing and braces
        ss << "{x: " << x << ", y: " << y << ", direction: '" << direction << "'}";
        position = ss.str();
    }

public:
    Spaceship() : x(0), y(0) {
        updatePositionString("up"); // Start at (0, 0) facing 'up'
    }

    Spaceship(const string& path) : x(0), y(0) {
        string direction = "up"; // Initial direction
        
        for (char move : path) {
            if (move == 'A') {
                // Advance (A)
                if (direction == "up") y--;
                else if (direction == "down") y++;
                else if (direction == "left") x--;
                else if (direction == "right") x++;
            } else if (move == 'R') {
                // Turn Right (R)
                if (direction == "up") direction = "right";
                else if (direction == "right") direction = "down";
                else if (direction == "down") direction = "left";
                else if (direction == "left") direction = "up";
            } else if (move == 'L') {
                // Turn Left (L)
                if (direction == "up") direction = "left";
                else if (direction == "left") direction = "down";
                else if (direction == "down") direction = "right";
                else if (direction == "right") direction = "up";
            }
        }
        updatePositionString(direction);
    }

    string getPosition() const {
        return position;
    }
};

int main(void) {
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