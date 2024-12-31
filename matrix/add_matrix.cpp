#include <iostream>
using namespace std;

int matrixSum(int rows, int columns, int matrix[100][100]) {
    int sum = 0;

    // Iterate through the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sum += matrix[i][j];  // Add the current element to the sum
        }
    }

    return sum;
}

int main() {
    int rows, columns;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> columns;

    int matrix[100][100];
    cout << "Enter the elements of the matrix:\n";

    // Input the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    // Calculate and display the sum of the matrix
    cout << "Sum of the elements of the matrix: " << matrixSum(rows, columns, matrix) << endl;

    return 0;
}
