#include <iostream>

using namespace std;

void printSpaces(int spaces) {
    for (int i = 0; i < spaces; i++) {
        cout << " ";
    }
}

void printSymbols(int spaces) {
    for (int i = 0; i < spaces; i++) {
        cout << "*";
    }
}

void print(int size) {
    int spacesOut = 1;
    int spacesIn = (size % 2 == 0) ? ((size / 2) + 1) : size / 2;

    printSymbols(size);
    cout << endl;

    for (int row = 0; row < size; row++) {
        printSpaces(spacesOut);
        cout << "*";
        printSpaces(spacesIn);
        cout << "*";
        printSpaces(spacesOut);

        spacesOut++;

        spacesIn -= 2;

        cout << endl;
    }
}

int main(int argc, char const *argv[]) {

    int size;

    cin >> size;

    print(size);

    return 0;
}
