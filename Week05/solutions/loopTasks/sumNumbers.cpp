#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

    int number, sum = 0;

    const int LIMIT = 30;

    while (cin >> number && sum <= 100) {
        if (number <= LIMIT) {
            sum += number;
        }
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
