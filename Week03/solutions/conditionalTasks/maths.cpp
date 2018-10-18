#include <iostream>
#include <cmath>

using namespace std;

double calculate(int x) {
    switch (x) {
        case 1: return x -= 5;
        case 2: return sin(x);
        case 3: return cos(x);
        case 4: return exp(x);
    }
}

int main(int argc, char const *argv[]) {

    int x;

    cin >> x;

    cout << "Result -> " << calculate(x) << endl;

    return 0;
}
