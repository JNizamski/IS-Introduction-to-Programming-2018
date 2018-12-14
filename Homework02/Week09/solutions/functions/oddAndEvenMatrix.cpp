#include <iostream>

using namespace std;

int** constructMatrix(int rows, int cols) {
    int** matrix = new int*[rows];

    for (int row = 0; row < rows; row++) {
        matrix[row] = new int[cols];
    }

    return matrix;
}


void destructMatrix(int** const& matrix, int rows, int cols) {
    for (int row = 0; row < rows; row++) {
        delete [] matrix[row];
    }

    delete [] matrix;
}

void fillMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

bool isEven(int number) {
    return number % 2 == 0;
}

void resetCounters(int& oddInRow, int& evenInRow,
                   int& oddInCol, int& evenInCol) {
    oddInRow = 0;
    evenInRow = 0;
    oddInCol = 0;
    evenInCol = 0;
}

void printMatrixData(int& oddInRow, int& evenInRow,
                   int& oddInCol, int& evenInCol, int rowIndex, int colIndex) {
    cout << "Row " << rowIndex << " -> {" << endl
            << "oddNumbers = " << oddInRow << endl
            << "evenNumbers = " << evenInRow << endl << "};" << endl << endl
         << "Col " << colIndex << " -> {" << endl
              << "oddNumbers = " << oddInCol << endl
              << "evenNumbers = " << evenInCol << endl << "};" << endl;
}

void printOddAndEven(int** matrix, int rows, int cols) {

    int oddInRow, evenInRow;
    int oddInCol, evenInCol;
    int tempIndex = 0;

    resetCounters(oddInRow, evenInRow, oddInCol, evenInCol);

    for (int i = 0; i < rows; i++, tempIndex++) {
        for (int j = 0; j < cols; j++) {
            if (isEven(matrix[i][j])) {
                evenInRow++;
            } else {
                oddInRow++;
            }

            if (isEven(matrix[j][i])) {
                evenInCol++;
            } else {
                oddInCol++;
            }
        }

        printMatrixData(oddInRow, evenInRow, oddInCol, evenInCol, i, tempIndex);
        resetCounters(oddInRow, evenInRow, oddInCol, evenInCol);
    }
}

int main(int argc, char const *argv[]) {

    int rows, cols;

    cin >> rows >> cols;

    int** matrix = constructMatrix(rows, cols);

    fillMatrix(matrix, rows, cols);

    printOddAndEven(matrix, rows, cols);

    destructMatrix(matrix, rows, cols);

    return 0;
}
