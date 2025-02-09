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
bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int num1, num2;

    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;

    // Validate input (positive numbers only)
    if (num1 <= 0 || num2 <= 0)
    {
        cout << "Both numbers must be positive and greater than zero." << endl;
        return 0;
    }

    // Check if num1 is a factor of num2
    if (num2 % num1 == 0)
    {
        if (isPrime(num1))
        {
            cout << num1 << " is a prime factor of " << num2 << endl;
        }
        else
        {
            cout << num1 << " is a factor of " << num2 << " but not a prime factor." << endl;
        }
    }
    else
    {
        cout << num1 << " is not a factor of " << num2 << endl;
    }

    return 0;
}
