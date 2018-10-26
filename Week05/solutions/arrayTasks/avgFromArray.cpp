#include <iostream>

#define ARRAY_SIZE 7

using namespace std;

long sumNumbers(int* numbers) {
    long sum = 0;

    for (int i = 0; i < ARRAY_SIZE; i++) {
        sum += numbers[i];
    }

    return sum;
}

double getAverage(int* numbers) {
    return (double) sumNumbers(numbers) / ARRAY_SIZE;
}

int main(int argc, char const *argv[]) {

    int* numbers = new int[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++) {
        cin >> numbers[i];
    }

    cout << "Average: " << getAverage(numbers) << endl;

    delete [] numbers;

    return 0;
}
