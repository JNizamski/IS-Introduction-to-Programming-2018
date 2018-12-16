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

void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void copyTranspositionMatrix(int** inputMatrix, int rows, int cols, int** transpositionMatrix) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpositionMatrix[j][i] = inputMatrix[i][j];
        }
    }
}

int main(int argc, char const *argv[]) {

    int rows, cols;

    cin >> rows >> cols;

    int** inputMatrix = constructMatrix(rows, cols);

    fillMatrix(inputMatrix, rows, cols);

    int** transpositionMatrix = constructMatrix(cols, rows);

    copyTranspositionMatrix(inputMatrix, rows, cols, transpositionMatrix);

    printMatrix(transpositionMatrix, cols, rows);

    destructMatrix(inputMatrix, rows, cols);

    destructMatrix(transpositionMatrix, cols, rows);

    return 0;
}
