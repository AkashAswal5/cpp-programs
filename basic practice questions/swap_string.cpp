//  Swap Two Strings
//  Swap the content of two strings.

#include <iostream>
using namespace std;
int main()
{

    string str1;
    cout << "Enter string1: ";
    getline(cin, str1);

    string str2;
    cout << "Enter string2: ";
    getline(cin, str2);

    string temp;

    temp = str1;
    str1 = str2;
    str2 = temp;

    cout << "String after swap: " << endl;
    cout << "string1: " << str1 << endl;
    cout << "String2: " << str2 << endl;

    return 0;
}
