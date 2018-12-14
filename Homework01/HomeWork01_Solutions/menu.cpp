#include <iostream>

using namespace std;

bool isValid(int number) {
    int digits = 0;

    for (; number; number /= 10) {
        if (number % 10 == 5) {
            digits++;
        }
    }

    return digits == 3;
}

int main(int argc, char const *argv[]) {

    int money = 5, option;
    int number;

    do {
        cout << "-> Press 1 to check the balance" << endl
             << "-> Press 2 to load voucher" << endl
             << "-> Press 3 to exit" << endl;

        cin >> option;

        switch (option) {
            case 1:
                cout << "Balance: ";
                cout << money << endl;
                break;
            case 2:
                cout << "Enter voucher number: ";
                cin >> number;

                if (isValid(number)) {
                    money += 10;
                } else {
                    cout << "Error: Voucher is not valid" << endl;
                }
            case 3:
                break;
            default:
                cout << "Error: Option have to be between 1 and 3" << endl;
        }

    } while(option != 3);

    return 0;
}
