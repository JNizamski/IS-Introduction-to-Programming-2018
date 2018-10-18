#include <iostream>

using namespace std;

void calculate(char operation, int left, int right) {

    switch (operation) {
        case '+':
            cout << (left + right);
            break;
        case '-':
            cout << (left - right);
            break;
        case '*':
            cout << (left * right);
            break;
        case '/':
            cout << (left / right);
            break;
        case '%':
            cout << (left % right);
            break;
        default:
            cout << "Invalid operation";
    }

    cout << endl;
}

int main(int argc, char const *argv[]) {

    char operation;

    int left, right;

    cin >> operation >> left >> right;

    calculate(operation, left, right);

    return 0;
}
