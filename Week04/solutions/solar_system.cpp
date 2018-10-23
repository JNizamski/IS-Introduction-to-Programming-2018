#include <iostream>
#include <string>

using namespace std;

string getPlanet(int number) {

    switch (number) {
        case 1: return "Mercury";
        case 2: return "Venus";
        case 3: return "Earth";
        case 4: return "Mars";
        case 5: return "Jupiter";
        case 6: return "Saturn";
        case 7: return "Uranus";
        case 8: return "Neptune";
        case 9: return "Pluto";
        default:
            throw runtime_error("Planets in solar system are between -> [1, 9]");
    }
}

int main(int argc, char const *argv[]) {

    int number;

    cin >> number;

    try {
        cout << getPlanet(number) << endl;
    } catch(runtime_error err) {
        cout << "Error: " << err.what() << endl;
    }

    return 0;
}
