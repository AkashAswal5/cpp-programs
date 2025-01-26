/*
1.	 Find the number of digits in a number
Description: Find how many digits are in a given number.
Example:
Input: 12345
Output: 5

*/

#include <iostream>
using namespace std;

int countdigit(int n)
{
    int digit = 0, rem = 0;
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 0)
    {
        cout << "Number of digit: 1 " << endl;
    }
    else
    {
        cout << " number of digit: " << countdigit(num) << endl;
    }

    return 0;
}
