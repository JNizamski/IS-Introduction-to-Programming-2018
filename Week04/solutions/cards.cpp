#include <iostream>
#include <string>

#define SUIT_SIZE 13

using namespace std;

string getSuit(int cardNumber) {
    switch (cardNumber / SUIT_SIZE) {
        case 1: return "Clubs";
        case 2: return "Diamonds";
        case 3: return "Hearts";
        case 4: return "Spades";
    }
}

string getRank(int cardNumber) {
    switch (cardNumber % SUIT_SIZE) {
        case 0: return "Ace";
        case 1: return "2";
        case 2: return "3";
        case 3: return "4";
        case 4: return "5";
        case 5: return "6";
        case 6: return "7";
        case 7: return "8";
        case 8: return "9";
        case 9: return "10";
        case 10: return "Jack";
        case 11: return "Queen";
        case 12: return "King";
    }
}

void printCard(int cardNumber) {
    if (cardNumber < 1 || cardNumber > 52) throw runtime_error("Card number have to be -> [1, 52]");

    cout << getRank(cardNumber) << " of " << getSuit(cardNumber) << endl;
}

int main(int argc, char const *argv[]) {

    int cardNumber;

    cin >> cardNumber;

    try {
        printCard(cardNumber);
    } catch (runtime_error err) {
        cout << "Error: " << err.what() << endl;
    }

    return 0;
}
