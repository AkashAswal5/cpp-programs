// reverse a string
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;
    cout << "enter String: ";
    cin >> str1;
    int n = str1.length();
    for (int i = 0; i < n / 2; i++)
    {
        swap(str1[i], str1[n - i - 1]);
    }
    cout << " reverse string: " << str1;
    return 0;
}
