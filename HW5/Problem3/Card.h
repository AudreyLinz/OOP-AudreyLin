#include <string>
#include <vector>

using namespace std;

class Card {
private:
    int face; // 0-12 (Ace-King)
    int suit; // 0-3 (Hearts-Spades)

    static vector<string> faceNames; // Ace, Deuce, ..., King
    static vector<string> suitNames; // Hearts, Diamonds, Clubs, Spades

public:
    Card(int cardFace, int cardSuit);

    int getFace() const;
    int getSuit() const;

    string toString() const;
};