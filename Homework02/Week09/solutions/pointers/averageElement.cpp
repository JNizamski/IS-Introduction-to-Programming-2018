#include <iostream>

#define SIZE 512

using namespace std;

void fillArray(double* array, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        cin >> *(array + i);
    }
}

void printArray(double* array, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        cout << *(array + i) << " ";
    }

    cout << endl;
}

double getAverage(double left, double right) {
    return ((right + left) / 2);
}

bool isEqualToAverage(double current, double average) {
    return current == average;
}

bool isLastElement(int arrSize, int index) {
    return index == arrSize - 1;
}

bool isFirstElement(int index) {
    return index == 0;
}

int findAverageElementPosition(double* array, int arrSize) {

    int lastAverageIndex = -1;

    for (int i = 0, average = 0; i < arrSize; i++, average = 0) {

        if (isLastElement(arrSize, i)) {
            average = getAverage(*(array + (i - 1)), 0);
        } else if(isFirstElement(i)) {
            average = getAverage(0, *(array + (i + 1)));
        } else {
            average = getAverage(*(array + (i - 1)), *(array + (i + 1)));
        }

        if (isEqualToAverage(*(array + i), average)) lastAverageIndex = i;
    }

    return lastAverageIndex;
}

int main(int argc, char const *argv[]) {

    double array[SIZE];

    int arrSize;

    cin >> arrSize;

    fillArray(array, arrSize);

    cout << findAverageElementPosition(array, arrSize) << endl;

    return 0;
}
