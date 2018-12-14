#include <iostream>

#define SIZE 512

using namespace std;

void fillArray(int* array, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        cin >> *(array + i);
    }
}

int convertToBinary(int number) {
    int converted = 0;

    for (int base = 1; number; number /= 2, base *= 10) {
        converted += (number % 2) * base;
    }

    return converted;
}

void fillBinaryArray(int* input, int* binaryArray, int arrSize) {

    for (int i = 0; i < arrSize; i++) {
        *(binaryArray + i) = convertToBinary(*(input + i));
    }
}

void printArrays(int* input, int* binaryArray, int arrSize) {

    for (int i = 0; i < arrSize; i++) {
        cout << *(input + i) << " - "
             << *(binaryArray + i) << endl;
    }
}

int main(int argc, char const *argv[]) {

    int array[SIZE];

    int arrSize;

    cin >> arrSize;

    int binaryArray[arrSize];

    fillArray(array, arrSize);

    fillBinaryArray(array, binaryArray, arrSize);

    printArrays(array, binaryArray, arrSize);

    return 0;
}
