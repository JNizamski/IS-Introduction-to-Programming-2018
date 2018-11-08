#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

    int number, sum = 0, counter = 0;

    for (;;) {
        cin >> number;

        if (number < 0) break;

        counter++;
        sum += number;
    }

    cout << "Count: " << counter << ", "
         << "Sum: " << sum << ", "
         << "Average: " << sum / (double) counter << endl;

    return 0;
}
