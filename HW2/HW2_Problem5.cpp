#include <iostream>
#include <string>
using namespace std;

void count(const string& s);

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);  // Read full line of text

    count(input);
    return 0;
}

void count(const string& s) {
    int freq[26] = {0};  // Array to count 26 letters

    for (char ch : s) {
        if (isalpha(ch)) {
            ch = tolower(ch); // make case insensitive
            freq[ch - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << static_cast<char>('a' + i) << ": " << freq[i] << endl;
        }
    }
}