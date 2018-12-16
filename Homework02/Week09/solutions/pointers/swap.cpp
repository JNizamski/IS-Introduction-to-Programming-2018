#include <iostream>

using namespace std;

void customSwap(int* first, int* second) {
    int temporary = *first;
    *first = *second;
    *second = temporary;
}

int main(int argc, char const *argv[]) {

    int first, second;

    cin >> first >> second;

    customSwap(&first, &second);

    cout << first << ", " << second << endl;

    return 0;
}
