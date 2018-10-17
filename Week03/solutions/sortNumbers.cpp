#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {

    float* numbers = new float[3];

    for (int i = 0; i < 3; i++) {
        cin >> numbers[i];
    }

    sort(numbers, numbers + 3);

    return 0;
}
