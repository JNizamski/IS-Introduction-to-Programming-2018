#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

    int number;
    long fact = 1;

    cin >> number;

    for(int i = 1; i <= number; i++) {
        fact *= i;
    }

    cout << fact << endl;

    return 0;
}
