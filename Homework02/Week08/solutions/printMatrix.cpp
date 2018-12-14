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

bool isMainDiagonalElement(int rowIndex, int colIndex) {
    return rowIndex == colIndex;
}

bool isAboveDiagonalElement(int rowIndex, int colIndex) {
    return colIndex > rowIndex;
}

int getElement(int rowIndex, int colIndex) {
    if (isMainDiagonalElement(rowIndex, colIndex)) {
        return rowIndex;
    }

    if (isAboveDiagonalElement(rowIndex, colIndex)) {
        return colIndex - rowIndex;
    }

    return rowIndex * colIndex;
}

void fillMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = getElement(i, j);
        }
    }
}

void printMatrix(int rows, int cols) {
    int** matrix = constructMatrix(rows, cols);

    fillMatrix(matrix, rows, cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    destructMatrix(matrix, rows, cols);
}

int main(int argc, char const *argv[]) {

    int n, m;

    cin >> n >> m;

    printMatrix(n, m);
    
    return 0;
}
