#include <iostream>

using namespace std;

bool isSumPrime(int sum) {
    for (int i = 2; i < sum; i++) {
        if (sum % i == 0) {
            return false;
        }
    }

    return true;
}

bool isValidDivisors(int number) {
    int sum = 0;

    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return isSumPrime(sum);
}

int main(int argc, char const *argv[]) {

    int n, m, counter = 0;

    cin >> n >> m;

    for (int i = n; i < m; i++) {
        if (isValidDivisors(i)) {
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}
