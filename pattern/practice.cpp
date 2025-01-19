
#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    /*

    *
    **
    ***
    ****
    *****

    */

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    /*
        *
       ***
      *****
     *******
    *********

    */

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    /*

        *
       ***
      *****
     *******
    *********
     *******
      *****
       ***
        *

    */

    // upper half
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // lower half

    for (int i = n - 1; i >= 1; i--)
    {

        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
