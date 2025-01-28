/*8.	 Check if a number is a factor of another number
Description: Check if one number is a factor of another number.
Example:
Input: 10, 20
Output: True (10 is a factor of 20)
*/

#include <iostream>
using namespace std;

void checkfactor(int n, int m)
{

    if (m == 0)
    {
        if (n == 0)
        {
            cout << "0 is not a valid factor of 0." << endl;
        }
        else
        {
            cout << n << " IS a factor of 0 (by definition)." << endl;
        }
        return;
    }

    if (n == 0)
    {
        cout << "Division by zero is not allowed." << endl;
        return;
    }

    if (m % n == 0)
    {
        cout << n << " IS factor of " << m << endl;
    }
    else
    {
        cout << n << " is not factor of " << m << endl;
    }
}
int main()
{

    int num1, num2;
    cout << "Enter number number to check if first number is factor of second number " << endl;
    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    checkfactor(num1, num2);
    return 0;
}
