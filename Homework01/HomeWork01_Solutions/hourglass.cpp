#include <iostream>

using namespace std;

void printFirstAndLastLine(int size) {
    for (int col = 0; col < size; col++) {
        cout << "*";
    }
    cout << endl;
}

void printSpaces(int number) {
    for (int col = 0; col < number; col++) {
        cout << " ";
    }
}

void printCore(int size) {

    int spacesIn = (2 * (size / 2)) - 3;
    int spacesOut = 1;


    //First Part
    for (int row = 0; row < (size / 2) - 1; row ++, spacesOut++, spacesIn -= 2) {
        printSpaces(spacesOut);

        cout << "*";

        printSpaces(spacesIn);

        cout << "*";

        cout << endl;
    }

    for (int row = 0; row < size / 2; row ++, spacesOut--, spacesIn += 2) {

        printSpaces(spacesOut);

        cout << "*";

        printSpaces(spacesIn);

        if (row) cout << "*";

        cout << endl;
    }
}

int main(int argc, char const *argv[]) {

    int size;

    cin >> size;

    printFirstAndLastLine(size);
    printCore(size);
    printFirstAndLastLine(size);

    return 0;
}
