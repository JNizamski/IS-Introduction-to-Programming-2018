#include <iostream>
#include <string>

using namespace std;

string getPlayerPosition(int number) {

    if (number < 0 || number > 99) throw runtime_error("Player numbers have to be between -> [1, 99]");

    if (number == 11) return "Striker";

    switch (number % 10) {
        case 1: return "Goalkeeper";
        case 2 ... 4: return "Defender";
        case 5 ... 8: return "Мidfielder";
        default:
            return "Striker";
    }

}

int main(int argc, char const *argv[]) {

    int number;

    cin >> number;

    try {
        cout << getPlayerPosition(number) << endl;
    } catch(runtime_error err) {
        cout << "Error: " << err.what() << endl;
    }

    return 0;
}
