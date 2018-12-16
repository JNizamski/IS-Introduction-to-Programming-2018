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

bool removeNumber(int* array, int& arrSize, int searchedNumber) {
    int howManyRemoved = 0;

    for (int i = 0, j = 0; i < arrSize; i++) {
        if (*(array + i) == searchedNumber) {
            howManyRemoved++;
            continue;
        }

        *(array + j) = *(array + i);
        j++;
    }

    arrSize -= howManyRemoved;

    return howManyRemoved;
}

int main(int argc, char const *argv[]) {

    int array[SIZE];

    int arrSize, n;

    cin >> arrSize;

    fillArray(array, arrSize);

    cin >> n;

    cout << (removeNumber(array, arrSize, n) ? "Removed elements" : "No removed elements") << endl;

    //printArray(array, arrSize);

    return 0;
}
