#include <iostream>
using namespace std;

void rowSum(int matrix[3][3], int rows) {
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += matrix[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << sum << endl;
    }
}

void columnSum(int matrix[3][3], int rows) {
    for (int j = 0; j < 3; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += matrix[i][j];
        }
        cout << "Sum of column " << j + 1 << ": " << sum << endl;
    }
}

void multiplyMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix1[3][3], matrix2[3][3], result[3][3];
    int rows = 3, cols = 3;

    cout << "Enter elements of first 3x3 matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of second 3x3 matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix2[i][j];
        }
    }

    rowSum(matrix1, rows);
    columnSum(matrix1, rows);
    multiplyMatrices(matrix1, matrix2, result, rows, cols);
    cout << "Matrix multiplication result: " << endl;
    displayMatrix(result, rows, cols);

    return 0;
}
