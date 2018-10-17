#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string convertIntToString(int number) {
    ostringstream out;

    out << number;

    return out.str();
}

bool isPalindrome(int number) {

    string converted = convertIntToString(number);

    for(int i = 0, l = converted.size() - 1; i != l; i++, l--) {
        if (converted[i] != converted[l]) return false;
    }

    return true;
}

int main(int argc, char const *argv[]) {

    int inputNumber;

    cin >> inputNumber;

    cout << (isPalindrome(inputNumber) ? "Yes" : "No") << endl;

    return 0;
}
