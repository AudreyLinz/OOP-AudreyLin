#include <vector>
#include "Card.h"

using namespace std;

class DeckOfCards {
private:
    vector<Card> deck; // Vector to store the 52 Cards
    int currentCard; // Index of the next Card to be dealt

public:
    // Default constructor to initialize the deck
    DeckOfCards();

    // Shuffles the Cards in the deck
    void shuffle();

    // Deals the next Card from the deck
    Card dealCard();

    // Returns true if there are more Cards to deal
    bool moreCards() const;
};