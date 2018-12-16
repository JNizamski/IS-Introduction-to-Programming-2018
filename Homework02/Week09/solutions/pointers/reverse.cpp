#include <iostream>

#define SIZE 512

using namespace std;

void fillArray(int* array, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        cin >> *(array + i);
    }
}

void printArray(int* array, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        cout << *(array + i) << " ";
    }

    cout << endl;
}

void swapElements(int* first, int* second) {
    int elem = *first;
    *first = *second;
    *second = elem;
}

void reverseArray(int* array, int arrSize) {
    for (int i = 0; i < (arrSize / 2); i++) {
        swapElements((array + i), (array + (arrSize - i - 1)));
    }
}

int main(int argc, char const *argv[]) {

    int array[SIZE];

    int arrSize;

    cin >> arrSize;

    fillArray(array, arrSize);

    reverseArray(array, arrSize);

    printArray(array, arrSize);

    return 0;
}
