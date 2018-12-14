#include <iostream>

using namespace std;

int getPower(int number) {
    int power = 0;

    while (number) {
        number /= 10;
        power++;
    }

    return power;
}

long customPow(int base, int power) {
    long result = 1;

    for (size_t i = 0; i < power; i++) {
        result *= base;
    }

    return result;
}

long calculateSum(int number) {
    long sum = 0;
    int power = getPower(number);

    for (; number; number /= 10) {
        sum += customPow((number % 10), power);
    }

    return sum;
}

bool isNarcissistic(int number) {
    return number == calculateSum(number);
}

int main(int argc, char const *argv[]) {

    int number;

    cin >> number;

    cout << (isNarcissistic(number) ? "is narcissistic"
                                    : "is not narcissistic") << endl;

    return 0;
}
