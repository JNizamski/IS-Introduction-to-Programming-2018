#include <iostream>

using namespace std;

double convertToF(double celsius) {
    return (celsius * 1.8) + 32;
}

double convertToC(double fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

void convertTemperature(int option) {

    double temperature = 0.0;

    switch (option) {
        case 1:
            cout << "Temperature in Celsius: ";
            cin >> temperature;

            cout << "Temperature in Fahrenheit: " << convertToF(temperature) << endl;
        break;

        case 2:
            cout << "Temperature in Fahrenheit: ";
            cin >> temperature;

            cout << "Temperature in Celsius: " << convertToC(temperature) << endl;
        break;

        default:
            cout << "Options is only 1 || 2" << endl;
    }
}

int main(int argc, char const *argv[]) {

    int option;

    cout << "What kind of conversion do you want to make?" << endl
         << "1) Celsius to Fahrenheit" << endl
         << "2) Fahrenheit to Celsius" << endl;

    cin >> option;

    convertTemperature(option);

    return 0;
}
