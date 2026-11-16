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

int main() {
    int matrix[MAX_ROWS][MAX_COLS] = {};

    int rows, cols;
    std::cin >> rows;
    std::cin >> cols;

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    return 0;
}
