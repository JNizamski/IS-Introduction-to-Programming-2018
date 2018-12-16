#include <iostream>

#define SIZE 512

using namespace std;

bool isLowercaseVowel(char symbol) {
    return symbol == 'a' || symbol == 'e' ||
           symbol == 'i' || symbol == 'o' ||
           symbol == 'u';
}

void removeVowels(char* string) {
    int i = 0, j = 0;

    for (; *(string + i) != '\0'; i++) {
        if (!isLowercaseVowel(*(string + i))) {
            *(string + j) = *(string + i);
            j++;
        }
    }

    *(string + j) = '\0'; // Add C-string last element - NULL '\0'
}

int main(int argc, char const *argv[]) {

    char string[SIZE];

    cin >> string;

    removeVowels(string);

    cout << string << endl;

    return 0;
}
