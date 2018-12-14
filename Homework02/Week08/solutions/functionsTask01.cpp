#include <iostream>

using namespace std;

int abs(int number) {
    return number < 0 ? -number : number;
}

double pow(double base, int power) {
    double result = 1;

    for (int n = 0; n < power; n++) {
        result *= base;
    }

    return result;
}

double min(double first, double second) {
    return first > second ? second : first;
}

double max(double first, double second) {
    return first > second ? first : second;
}

double minOf3(double first, double second, double third) {
    return min(min(first, second), third);
}

double maxOf3(double first, double second, double third) {
    return max(max(first, second), third);
}

bool isAlpha(char symbol) {
    return symbol >= 'A' && symbol <= 'Z'
                         || symbol >= 'a' && symbol <= 'z';
}

bool isDigit(char symbol) {
    return symbol >= '0' && symbol <= '9';
}

int main(int argc, char const *argv[]) {

    /*
    int number;

    cin >> number;

    cout << abs(number) << endl;
    */

    /*
    double base;
    int power;

    cin >> base >> power;

    cout << pow(base, power) << endl;
    */

    /*
    double first, second;

    cin >> first >> second;

    cout << min(first, second) << ", " << max(first, second) << endl;
    */

    /*
    double first, second, third;

    cin >> first >> second >> third;

    cout << minOf3(first, second, third) << ", "
         << maxOf3(first, second, third) << endl;
    */


    /*
    char symbol;

    cin >> symbol;

    cout << (isAlpha(symbol) ? "IsAlpha" : "IsNotAlpha") << endl
         << (isDigit(symbol) ? "IsDigit" : "IsNotDigit") << endl;
    */
    
    return 0;
}
