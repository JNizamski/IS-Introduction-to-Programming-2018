#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

    int number, sum = 0, counter = 0;

    while (counter < 5 && sum <= 234) {
        cin >> number;

        if (number >= 10 && number <= 99) {
            counter++;
            sum += number;
        } else continue;
    }

    cout << counter << ", " << sum << endl;

    return 0;
}
