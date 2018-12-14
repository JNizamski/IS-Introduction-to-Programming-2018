#include <iostream>

using namespace std;

bool isPrime(int number) {
    for (int d = 2; d <= (number / 2); d++) {
        if (number % d == 0) {
            return false;
        }
    }

    return true;
}

bool isPaired(int first, int second) {
    return (isPrime(first) && isPrime(second)) && (first + 2 == second);
}

int main(int argc, char const *argv[]) {

    int first, second;

    cin >> first >> second;

    cout << (isPaired(first, second) ? "isPaired" : "isNotPaired") << endl;

    return 0;
}
