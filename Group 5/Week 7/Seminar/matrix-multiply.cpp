#include <iostream>

const int MAX_ROWS = 50;
const int MAX_COLS = 50;

void inputMatrix(int matrix[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }
}
void printMatrix(const int matrix[][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void multiplyMatrices(const int a[][MAX_COLS], int aRows, int aCols,
                      const int b[][MAX_COLS], int bRows, int bCols,
                      int result[][MAX_COLS], int &resultRows,
                      int &resultCols) {
    resultRows = aRows;
    resultCols = bCols;

    for (int i = 0; i < resultRows; i++) {
        for (int j = 0; j < resultCols; j++) {
            int sum = 0;

            for (int k = 0; k < aCols; k++) {
                sum += a[i][k] * b[k][j];
            }

            result[i][j] = sum;
        }
    }
}

int main() {
    int a[MAX_ROWS][MAX_COLS] = {{1, 2}, {3, 4}, {5, 6}};
    int aRows = 3;
    int aCols = 2;

    int b[MAX_ROWS][MAX_COLS] = {{10, 15, 14}, {20, 30, 40}};
    int bRows = 2;
    int bCols = 3;

    int c[MAX_ROWS][MAX_COLS];
    int cRows, cCols;

    multiplyMatrices(a, aRows, aCols, b, bRows, bCols, c, cRows, cCols);
    printMatrix(c, cRows, cCols);

    return 0;
}
