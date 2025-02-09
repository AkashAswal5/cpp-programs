/*
12.	Check if a number is a factor of another number 
Description: Check if one number is a prime factor of another number. 
Example: 
Input: 10, 20 
Output: True (10 is a factor of 20) 
*/

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n1, n2;

    cout << "Program to check if a number is a factor of another number.\n";
    cout << "Enter num1: ";
    cin >> n1;
    cout << "Enter num2: ";
    cin >> n2;

    if (n1 > n2) {
        cout << "Error: num1 should be smaller than or equal to num2.\n";
        return 1;
    }

    if (n2 % n1 == 0) {
        cout << "True, " << n1 << " is a factor of " << n2 << ".\n";
        
        // Check if the factor is prime
        if (isPrime(n1)) {
            cout << n1 << " is also a prime factor of " << n2 << ".\n";
        } else {
            cout << n1 << " is not a prime factor of " << n2 << ".\n";
        }
    } else {
        cout << "False, " << n1 << " is not a factor of " << n2 << ".\n";
    }

    return 0;
}
