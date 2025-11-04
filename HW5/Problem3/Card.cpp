#include "Card.h"

using namespace std;

vector<string> Card::faceNames = {
    "Ace", "Deuce", "Three", "Four", "Five", "Six",
    "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"
};
vector<string> Card::suitNames = {
    "Hearts", "Diamonds", "Clubs", "Spades"
};

// Constructor implementation
Card::Card(int cardFace, int cardSuit)
    : face(cardFace), suit(cardSuit) {
    
}

// Accessor for face
int Card::getFace() const {
    return face;
}

// Accessor for suit
int Card::getSuit() const {
    return suit;
}

// toString implementation: "face of suit"
string Card::toString() const {
    return faceNames[face] + " of " + suitNames[suit];
}