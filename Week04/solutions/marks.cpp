#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string getMarkInText(float mark) {

    int rounded = roundf(mark) + 0.5f;

    switch (rounded) {
        case 2: return "Слаб";
        case 3: return "Среден";
        case 4: return "Добър";
        case 5: return "Много добър";
        case 6: return "Отличен";
        default:
            throw runtime_error("Mark have to be between -> [2.00, 6]");
    }
}

int main(int argc, char const *argv[]) {

    float inputMark;

    cin >> inputMark;

    try {
        cout << getMarkInText(inputMark) << " (" << inputMark << ")" << endl;
    } catch (runtime_error err) {
        cout << "Error: " << err.what() << endl;
    }

    return 0;
}
