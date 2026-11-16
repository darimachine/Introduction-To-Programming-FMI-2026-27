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

void transposeMatrix(const int matrix[][MAX_COLS], int transposed[][MAX_ROWS],
                     int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int matrix[MAX_ROWS][MAX_COLS] = {};

    int rows, cols;
    std::cin >> rows;
    std::cin >> cols;

    inputMatrix(matrix, rows, cols);

    int transposed[MAX_COLS][MAX_ROWS];
    transposeMatrix(matrix, transposed, rows, cols);

    printMatrix(transposed, cols, rows);

    return 0;
}
