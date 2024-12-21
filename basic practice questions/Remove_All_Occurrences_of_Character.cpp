// remove all occurence of character in a string

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string result;

    int n = str.length();

    char ch;
    cout << "Enter a character to remove it: ";
    cin >> ch;

    for (int i = 0; i < n; i++)
    {

        if (str[i] != ch)
        {
            result += str[i];
        }
    }

    cout << "String after removal of '" << ch << "' is: " << result << endl;
    return 0;
}
