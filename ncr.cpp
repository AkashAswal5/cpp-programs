#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
int fact(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int num, r;

    // Prompt user for inputs
    cout << "Enter the value of n: ";
    cin >> num;
    cout << "Enter the value of r: ";
    cin >> r;

    // Validate input
    if (r > num) {
        cout << "Invalid input: r should not be greater than n." << endl;
        return 1;
    }

    // Calculate nCr
    int nCr = fact(num) / (fact(num - r) * fact(r));
    cout << "nCr = " << nCr << endl;

    return 0;
}
