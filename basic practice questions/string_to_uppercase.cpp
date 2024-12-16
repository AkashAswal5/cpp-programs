// convert string to uppercase

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Enter string: ";
    getline(cin, str); // use getline to handel input with spaces

    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        str[i] = toupper(str[i]); // convert each character to uppercase
    }

    cout << "Upper case String: " << str << endl;

    return 0;
}
