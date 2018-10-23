#include <iostream>
#include <string>

using namespace std;

string convertNumberInMorse(int number) {

    switch (number) {
        case 0: return "....";
        case 1: return "...-";
        case 2: return "..--";
        case 3: return "..---";
        case 4: return "----";
        case 5: return "-...";
        case 6: return "--..";
        case 7: return "---..";
        case 8: return "----.";
        case 9: return "-----";
        default:
            throw runtime_error("Number -> [0, 9]");
    }
}

int main(int argc, char const *argv[]) {

    int number;

    cin >> number;

    try {
        cout << convertNumberInMorse(number) << endl;
    } catch(runtime_error err) {
        cout << "Error: " << err.what() << endl;
    }

    return 0;
}
