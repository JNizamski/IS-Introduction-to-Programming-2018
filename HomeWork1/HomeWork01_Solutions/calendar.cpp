#include <iostream>

using namespace std;

bool isLeap(int year) {
    return ((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0;
}

int setDays(int month, int year) {
    int days = 0;

    switch (month) {
        case 2:
            isLeap(year) ? days = 29 : days = 28;
            break;
        case 4:
            case 6:
                case 9:
                    case 11: days = 30;
                        break;
        default:
            days = 31;
    }

    return days;
}

void printDaysInMonth(int month, int year) {

    switch (month) {
        case 1:
            cout << "January"; break;
        case 2:
            cout << "February"; break;
        case 3:
            cout << "March"; break;
        case 4:
            cout << "April"; break;
        case 5:
            cout << "May"; break;
        case 6:
            cout << "June"; break;
        case 7:
            cout << "July"; break;
        case 8:
            cout << "August"; break;
        case 9:
            cout << "September"; break;
        case 10:
            cout << "October"; break;
        case 11:
            cout << "November"; break;
        case 12:
            cout << "December"; break;
        default:
            cout << "Number have to be between [1, 12]";
            return;
    }

    cout << " - " << setDays(month, year) << " days" << endl;
}

int main(int argc, char const *argv[]) {

    int month, year;

    cin >> month >> year;

    printDaysInMonth(month, year);

    return 0;
}
