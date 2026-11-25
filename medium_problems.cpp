
#include <iostream>
using namespace std;

const int MAX_VALUE = 100;

void readMatrix(int matrix[MAX_VALUE][MAX_VALUE], int rows, int cols);
void readMatrix(int matrix[MAX_VALUE][MAX_VALUE], int size);
void sumOfElementsOnBothDiagonals(int matrix[MAX_VALUE][MAX_VALUE], int size);
void printMatrix(int matrix[MAX_VALUE][MAX_VALUE], int rows, int cols);
void transponierteMatrix(int matrix[MAX_VALUE][MAX_VALUE], int newMatrix[MAX_VALUE][MAX_VALUE], int rows, int cols);
void matrixMultiplication(int matrix1[MAX_VALUE][MAX_VALUE], int rows1, int cols1, int matrix2[MAX_VALUE][MAX_VALUE], int rows2, int cols2);
void underAndAboveDiagonal(int matrix[MAX_VALUE][MAX_VALUE], int size);

int main()
{
    /*
    int matrix[MAX_VALUE][MAX_VALUE];
    int newMatrix[MAX_VALUE][MAX_VALUE];

    int size;
    cin >> size;
    readMatrix(matrix, size);
    sumOfElementsOnBothDiagonals(matrix, size);

    int rows, cols;
    cin >> rows >> cols;
    readMatrix(matrix, rows, cols);
    transponierteMatrix(matrix, newMatrix, rows, cols);
    */ 

    /*
    int matrix1[MAX_VALUE][MAX_VALUE];
    int matrix2[MAX_VALUE][MAX_VALUE];

    int rows1, cols1;
    cin >> rows1 >> cols1;
    readMatrix(matrix1, rows1, cols1);

    int rows2, cols2;
    cin >> rows2 >> cols2;
    readMatrix(matrix2, rows2, cols2);

    matrixMultiplication(matrix1, rows1, cols1, matrix2, rows2, cols2);
    */

    int matrix[MAX_VALUE][MAX_VALUE];
    int size;
    cin >> size;
    readMatrix(matrix, size);
    underAndAboveDiagonal(matrix, size);

    
}

void readMatrix(int matrix[MAX_VALUE][MAX_VALUE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

void readMatrix(int matrix[MAX_VALUE][MAX_VALUE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int matrix[MAX_VALUE][MAX_VALUE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << '\n';
    }
}

void sumOfElementsOnBothDiagonals(int matrix[MAX_VALUE][MAX_VALUE], int size) {
    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;
    int total = 0;

    for (int i = 0; i < size; i++) {
        mainDiagonalSum += matrix[i][i];
    }

    for (int i = size - 1; i >= 0; i--) {
        secondaryDiagonalSum += matrix[i][i];
    }

    total = mainDiagonalSum + secondaryDiagonalSum;

    cout << "Main diagonal: " << mainDiagonalSum << '\n';
    cout << "Secondary diagonal: " << secondaryDiagonalSum << '\n';
    cout << "Total: " << total << '\n';
}

void transponierteMatrix(int matrix[MAX_VALUE][MAX_VALUE], int newMatrix[MAX_VALUE][MAX_VALUE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            newMatrix[j][i] = matrix[i][j];
        }
    }
    printMatrix(newMatrix, cols, rows);
}

void matrixMultiplication(int matrix1[MAX_VALUE][MAX_VALUE], int rows1, int cols1, int matrix2[MAX_VALUE][MAX_VALUE], int rows2, int cols2) {
    if (cols1 != rows2) {
        cout << "Cannot multiply";
        return;
    }

    int result[MAX_VALUE][MAX_VALUE] = { 0 };
    
    for (int i = 0; i < rows1; i++) {           
        for (int j = 0; j < cols2; j++) {       
            for (int k = 0; k < cols1; k++) {  
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printMatrix(result, rows1, cols2);
}

void underAndAboveDiagonal(int matrix[MAX_VALUE][MAX_VALUE], int size) {
    int sumAboveMainDiagonal = 0;
    int sumUnderMainDiagonal = 0;

    bool symmetric = true;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {

            if (i < j) {
                sumAboveMainDiagonal += matrix[i][j];
            }
            else if (j < i) {
                sumUnderMainDiagonal += matrix[i][j];
            }

            if (symmetric && matrix[i][j] != matrix[j][i]) symmetric = false;
        }
    }

    cout << "Above: " << sumAboveMainDiagonal << '\n';
    cout << "Under: " << sumUnderMainDiagonal << '\n';
    cout << "Symmetric: " << (symmetric ? "Yes" : "No");
 }


