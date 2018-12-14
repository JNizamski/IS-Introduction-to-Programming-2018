#include <iostream>

#define SIZE 512

using namespace std;

void fillArray(int* array, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        cin >> *(array + i);
    }
}

int factorial(int number) {
    if (number == 1) {
        return 1;
    }

    return number * factorial(number - 1);
}

void fillFactArray(int* input, int* factArray, int arrSize) {

    for (int i = 0; i < arrSize; i++) {
        *(factArray + i) = factorial(*(input + i));
    }
}

void printArrays(int* input, int* factArray, int arrSize) {

    for (int i = 0; i < arrSize; i++) {
        cout << *(input + i) << "! = "
             << *(factArray + i) << endl;
    }
}

int main(int argc, char const *argv[]) {

    int array[SIZE];

    int arrSize;

    cin >> arrSize;

    int factArray[arrSize];

    fillArray(array, arrSize);

    fillFactArray(array, factArray, arrSize);

    printArrays(array, factArray, arrSize);

    return 0;
}
