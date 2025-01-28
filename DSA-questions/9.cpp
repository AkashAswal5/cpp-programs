/*
9.	Find the product of digits of a number
Description: Calculate the product of the digits of a given number.
Example:
Input: 123
Output: 6 (1 * 2 * 3 = 6)
*/

#include <iostream>
#include <cmath> //include cmath for abs function
using namespace std;
void digitproduct(int n)
{
    if (n == 0)
    {
        cout << "The product of the digits of 0 is: 0" << endl;
        return;
    }
    n = abs(n); // convert to positive if negative
    int rem;
    int product = 1;
    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        product = product * rem;
    }
    cout << "The Product of the digits is: " <<product <<endl;
}
int main()
{
    int num;
    cout << "This is a program to Calculate the product of the digits of a given number." << endl;
    cout << "Enter a number : ";
    cin >> num;

    digitproduct(num);
    return 0;
}
