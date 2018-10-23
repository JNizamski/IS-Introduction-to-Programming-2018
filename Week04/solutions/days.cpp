#include <iostream>
#include <string>

using namespace std;

string getDay(int number) {

    switch (number) {
        case 0: return "Monday";
        case 1: return "Tuesday";
        case 2: return "Wednesday";
        case 3: return "Thursday";
        case 4: return "Friday";
        case 5: return "Saturday";
        case 6: return "Sunday";
        default:
            throw runtime_error("Days in week are numbers between -> [0, 6]");
    }
}

int main(int argc, char const *argv[]) {

    int number;

    cin >> number;

    try {
        cout << getDay(number) << endl;
    } catch(runtime_error err) {
        cout << "Error: " << err.what() << endl;
    }

    return 0;
}
