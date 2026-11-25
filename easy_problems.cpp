

#include <iostream>
using namespace std;

const int MAX_VALUE = 100;

void readMatrix(int matrix[MAX_VALUE][MAX_VALUE], int rows, int cols);
void printMatrix(int matrix[MAX_VALUE][MAX_VALUE], int rows, int cols);
void sumOfRowsAndCols(int matrix[MAX_VALUE][MAX_VALUE], int rows, int cols);
void maxElementOfMatrix(int matrix[MAX_VALUE][MAX_VALUE], int rows, int cols);
void minElementOfMatrix(int matrix[MAX_VALUE][MAX_VALUE], int rows, int cols);



int main()
{
    int matrix[MAX_VALUE][MAX_VALUE];
    int rows, cols;
    
    cin >> rows >> cols;

    readMatrix(matrix, rows, cols);

    //printMatrix(matrix, rows, cols);
    //sumOfRowsAndCols(matrix, rows, cols);
    maxElementOfMatrix(matrix, rows, cols);
    minElementOfMatrix(matrix, rows, cols);
}

void readMatrix(int matrix[MAX_VALUE][MAX_VALUE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int matrix[MAX_VALUE][MAX_VALUE], int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
            sum += matrix[i][j];
        }
        cout << '\n';
    }

    cout << "Sum: " << sum;
}

void sumOfRowsAndCols(int matrix[MAX_VALUE][MAX_VALUE], int rows, int cols) {
    cout << "Rows: ";
    for (int i = 0; i < rows; i++) {
        int temp_sum = 0;
        for (int j = 0; j < cols; j++) {
            temp_sum += matrix[i][j];
        }
        cout << temp_sum << " ";
    }

    cout << '\n' << "Cols: ";
    for (int i = 0; i < cols; i++) {
        int temp_sum = 0;
        for (int j = 0; j < rows; j++) {
            temp_sum += matrix[j][i];
        }
        cout << temp_sum << " ";
    }
}

void maxElementOfMatrix(int matrix[MAX_VALUE][MAX_VALUE], int rows, int cols) {
    int maxElementValue = matrix[0][0];
    int maxElementRow = 0;
    int maxElementCol = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > maxElementValue) {
                maxElementValue = matrix[i][j];
                maxElementRow = i;
                maxElementCol = j;
            }
        }
    }

    cout << "Max: " << maxElementValue << " (row " << maxElementRow << ", col " << maxElementCol << ")" << '\n';
}

void minElementOfMatrix(int matrix[MAX_VALUE][MAX_VALUE], int rows, int cols) {
    int minElementValue = matrix[0][0];
    int minElementRow = 0;
    int minElementCol = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < minElementValue) {
                minElementValue = matrix[i][j];
                minElementRow = i;
                minElementCol = j;
            }
        }
    }

    cout << "Min: " << minElementValue << " (row " << minElementRow << ", col " << minElementCol << ")" << '\n';
}
