#include <iostream>

using namespace std;

bool isPalindrome(int number) {
    int reversed = 0, copy = number;

    for (; number; number /= 10) {
        reversed = (reversed * 10) + (number % 10);
    }

    return reversed == copy;
}

int main(int argc, char const *argv[]) {

    int number;

    cin >> number;

    cout << (isPalindrome(number) ? "Number is a palindrome" : "Number is NOT a palindrome") << endl;

    return 0;
}
