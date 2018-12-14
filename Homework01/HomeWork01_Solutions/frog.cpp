#include <iostream>

using namespace std;

int calculateDays(int height) {
    const int stepUp = 2;
    const int stepDown = 1;
    int daysNeeded = 0;

    if (height == 1) return 1;

    while (height >= stepUp) {
        height -= (stepUp - stepDown);
        daysNeeded++;
    }

    return daysNeeded;
}

int main(int argc, char const *argv[]) {

    int metres, days = 0;

    cin >> metres;

    cout << "Days needed: " << calculateDays(metres) << endl;

    return 0;
}
