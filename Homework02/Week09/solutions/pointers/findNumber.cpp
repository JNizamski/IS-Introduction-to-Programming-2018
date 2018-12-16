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

void printArray(int* array, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        cout << *(array + i) << " ";
    }

    cout << endl;
}

int* findNumber(int* array, int arrSize, int searchedNumber) {
    int binarySearched = convertToBinary(searchedNumber);

    for (int i = 0; i < arrSize; i++) {
        if (convertToBinary(*(array + i)) == binarySearched) {
            return (array + i);
        }
    }

    return nullptr;
}

int main(int argc, char const *argv[]) {

    int array[SIZE];

    int arrSize, searchedNumber;

    cin >> arrSize;

    fillArray(array, arrSize);

    cin >> searchedNumber;

    int* found = findNumber(array, arrSize, searchedNumber);

    return 0;
}
