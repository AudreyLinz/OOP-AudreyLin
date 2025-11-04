#include "DeckofCards.h"
#include <cstdlib> // For rand and srand
#include <ctime>   // For time
#include <algorithm> // For std::swap

using namespace std;

DeckOfCards::DeckOfCards() {
    currentCard = 0; // Start at the beginning of the deck

    // Loop through all suits (4) and faces (13) to create 52 cards
    for (int suit = 0; suit < 4; ++suit) {
        for (int face = 0; face < 13; ++face) {
            deck.push_back(Card(face, suit));
        }
    }
    srand(time(0));
}

// Shuffle function implementation
void DeckOfCards::shuffle() {
    currentCard = 0; // Reset the currentCard index to the beginning of the shuffled deck

    // Iterate through the vector
    for (size_t i = 0; i < deck.size(); ++i) {
        // Randomly select another card (0 to 51)
        int random_index = rand() % deck.size();

        // Swap the current card with the randomly selected card
        swap(deck[i], deck[random_index]);
    }
}

// dealCard function implementation
Card DeckOfCards::dealCard() {
    if (moreCards()) {
        return deck[currentCard++];
    }
    return Card(-1, -1);
}

bool DeckOfCards::moreCards() const {
    // There are 52 cards, so the index goes from 0 to 51
    return currentCard < deck.size();
}