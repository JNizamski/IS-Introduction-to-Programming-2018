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



void merge(int* first, int firstArrSize, int* second, int secondArrSize, int* merged) {

    for (int i = 0, j = 0, k = 0; (k < firstArrSize + secondArrSize); k++) {
        if (first[i] <= second[j]) {
            merged[k] = first[i++];
        } else {
            merged[k] = second[j++];
        }
    }
}

int main(int argc, char const *argv[]) {

    int first[SIZE], second[SIZE];
    int firstArrSize, secondArrSize;

    cin >> firstArrSize;

    fillArray(first, firstArrSize);

    cin >> secondArrSize;

    fillArray(second, secondArrSize);

    int* merged = new int[firstArrSize + secondArrSize];

    merge(first, firstArrSize, second, secondArrSize, merged);

    printArray(merged, firstArrSize + secondArrSize);

    delete [] merged;

    return 0;
}
