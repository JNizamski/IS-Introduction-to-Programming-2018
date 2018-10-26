#include <iostream>
#include <cmath>

using namespace std;

bool isFourDigit(int number) {
    int digits = 0;

    while (number) {
        number /= 10;
        digits++;
    }

    return digits == 4;
}

long sum(int number) {

    long sum = 0;

    for (int i = 0; i <= number; i++) {
        sum += pow(i, 2);
    }
}

void printInRange(int number) {
    for (int i = 0; i < number; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main(int argc, char const *argv[]) {

    int inputNumber;

    cin >> inputNumber;

    if (isFourDigit(inputNumber)) {
        sum(inputNumber);
        printInRange(inputNumber);
    }

    return 0;
}
