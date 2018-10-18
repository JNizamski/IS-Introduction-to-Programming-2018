#include <iostream>
#include <algorithm>

using namespace std;

void printNumbers(float* numbers) {
    for (int i = 0; i < 3; i++) {
        cout << *(numbers + i) << " "; //one extra space but..
    }

    cout << endl;
}

int main(int argc, char const *argv[]) {

    float* numbers = new float[3];

    for (int i = 0; i < 3; i++) {
        cin >> numbers[i];
    }

    sort(numbers, numbers + 3);

    printNumbers(numbers);

    delete [] numbers;

    return 0;
}
