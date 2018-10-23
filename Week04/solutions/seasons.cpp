#include <iostream>
#include <string>

using namespace std;

string getSeason(int number) {

    switch (number) {
        case 0: return "Spring";
        case 1: return "Summer";
        case 2: return "Autumn";
        case 3: return "Winter";
        default:
            throw runtime_error("Number -> [0, 3]");
    }
}

int main(int argc, char const *argv[]) {

    int number;

    cin >> number;

    try {
        cout << getSeason(number) << endl;
    } catch(runtime_error err) {
        cout << "Error: " << err.what() << endl;
    }

    return 0;
}
