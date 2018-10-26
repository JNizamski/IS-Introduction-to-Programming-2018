#include <iostream>

#define ARRAY_SIZE 7

using namespace std;

int getMaxNumber(int* numbers) {
    int max = *numbers;

    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    return max;
}

int main(int argc, char const *argv[]) {

    int* numbers = new int[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++) {
        cin >> numbers[i];
    }

    cout << "Max number: " << getMaxNumber(numbers) << endl;

    delete [] numbers;

    return 0;
}
