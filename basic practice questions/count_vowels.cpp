// count the number of vowels in a string

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str1;
    cout << "Enter the String: ";
    cin >> str1;
    int count = 0;
    int n = str1.length();

    for (int i = 0; i < n; i++)
    {
        char c = str1[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            count++;
        }
    }
    cout << "Total vowels: " << count;

    return 0;
}
