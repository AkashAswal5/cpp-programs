// check if string is palindrome

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str1;
    cout << "Enter string: ";
    cin >> str1;
    int n = str1.length();
    bool flag = true;
    for (int i = 0; i < n / 2; i++)
    {
        if (str1[i] != str1[n - i - 1])
        {

            flag = false;
            break;
        }

    }

    if (!flag)
    {
        cout << "not palindrome";
    }
    else
    {
        cout << "Palindrome";
    }

    return 0;
}
