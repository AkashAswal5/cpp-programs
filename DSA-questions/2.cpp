/*
2.	Print the Diagonal Elements of a Matrix:
Description: Extract the diagonal elements of a square matrix.
Input: [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
Output: [1, 5, 9]
*/

#include <iostream>
using namespace std;

void printmatrix(int n, int matrix[10][10])
{
    cout << "print diagonal matrix: [";
    for (int i = 0; i < n; i++)
    {
        cout << matrix[i][i];
        if (i < n - 1)
        {
            cout << ", ";
        }
    }
    cout << " ]" << endl;
}

int main()
{
    int n;
    cout << "Enter size of nxn matrix: ";
    cin >> n;

    int matrix[10][10];

    // input a matrix elements
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Element [" << i + 1 << "][" << j + 1 << "] :";
            cin >> matrix[i][j];
        }
    }

    printmatrix(n, matrix);

    return 0;
}
