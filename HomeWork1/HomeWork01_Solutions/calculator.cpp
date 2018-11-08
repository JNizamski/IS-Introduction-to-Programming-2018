#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {

    int initial, months;
    float rate, result = 1.0, monthlyRate = 0.0, payment = 0.0;

    cout << "Value for loan: ";
    cin >> initial;

    cout << "Number of months: ";
    cin >> months;

    cout << "Interest rate: ";
    cin >> rate;

    monthlyRate = ((rate / 12.0) / 100.0);

    result = initial * pow((1 + monthlyRate), months);

    cout << "Monthly interest rate: " << monthlyRate
         << endl
         << "Monthly payment: " << result / 12.0
         << endl
         << "The total amount to be returned: " << result
         << endl;

    return 0;
}
