#include <iostream>

using namespace std;

void checkDivisibility(int number) {
    for (int divisor = 2; divisor <= 10; divisor++) {
        !(number % divisor) ? (cout << "Number is divided by -> " << divisor)
                            : (cout << "Number is NOT divided by -> " << divisor);

        cout << endl;
    }
}

int main(int argc, char const *argv[]) {

    int inputNumber;

    cin >> inputNumber;

    checkDivisibility(inputNumber);

    return 0;
}
