#include <iostream>
#include <string>

using namespace std;

string getContinent(int number) {

    switch (number) {
        case 0: return "Africa";
        case 1: return "Asia";
        case 2: return "Europe";
        case 3: return "North America";
        case 4: return "South America";
        case 5: return "Antarctica";
        case 6: return "Australia/Oceania";
        default:
            throw runtime_error("Number -> [0, 6]");
    }
}

int main(int argc, char const *argv[]) {

    int number;

    cin >> number;

    try {
        cout << getContinent(number) << endl;
    } catch(runtime_error err) {
        cout << "Error: " << err.what() << endl;
    }

    return 0;
}
