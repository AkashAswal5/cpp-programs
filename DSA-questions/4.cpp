/*
4. Find the number of digits in a number
Description: Find how many digits are in a given number.
Example:
Input: 12345
Output: 5
*/

#include <iostream>
using namespace std;

int countdigit(int n)
{
    int count = 0;
    n = abs(n); // Handle negative numbers by taking the absolute value
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}
int main()
{

    int n;
    cout << "Enter a number to count its digit : ";
    cin >> n;

    if (n == 0)
    {
        cout << "Number of digits is : 1" << endl;
    }

    else
    {
        cout << "number of digits are: " << countdigit(n) << endl;
    }

    return 0;
}
