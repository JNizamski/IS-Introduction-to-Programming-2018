#include <iostream>

using namespace std;

int countDigits(int number) {
    int digits = 0;

    for(; number; number /= 10) {
        digits++;
    }

    return digits;
}

int main(int argc, char const *argv[]) {

    int number;

    cin >> number;

    cout << countDigits(number) << endl;

    return 0;
}
