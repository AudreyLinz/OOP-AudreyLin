#include <iostream>
#include "DeckofCards.h"

using namespace std;

int main() {
    DeckOfCards myDeckOfCards;

    cout << "**********INITIAL DECK ORDER**********" << endl;
    while(myDeckOfCards.moreCards()) {
        cout << myDeckOfCards.dealCard().toString() << endl;
    }
    
    // Reset the deck and shuffle
    myDeckOfCards.shuffle(); // place Cards in random order
    cout << "**********AFTER SHUFFLING**********" << endl;

    // print the content of the deck after shuffling
    while(myDeckOfCards.moreCards()) {
        cout << myDeckOfCards.dealCard().toString() << endl;
    }

    return 0;
}