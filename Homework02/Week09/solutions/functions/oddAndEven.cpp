#include <iostream>

#define SIZE 512

using namespace std;

void fillArray(int* array, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        cin >> *(array + i);
    }
}

bool isEven(int number) {
    return number % 2 == 0;
}

void printOddAndEven(int* array, int arrSize) {
    int oddCounter = 0, evenCounter = 0;

    for (int i = 0; i < arrSize; i++) {
        if (isEven(*(array + i))) {
            evenCounter++;
        } else {
            oddCounter++;
        }
    }

    cout << "Even -> " << evenCounter << endl
         << "Odd -> " << oddCounter << endl;
}

int main(int argc, char const *argv[]) {

    int array[SIZE];

    int arrSize;

    cin >> arrSize;

    fillArray(array, arrSize);

    printOddAndEven(array, arrSize);

    return 0;
}
