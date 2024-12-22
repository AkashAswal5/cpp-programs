//  Concatenate Two Strings
// Problem: Concatenate two strings without using the + operator.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;
    cout << "Enter string1: ";
    // cin>>str1;
    getline(cin, str1);

    string str2;
    cout << "Enter string2: ";
    // cin>>str2;
    getline(cin, str2);

    string result = str1;

    int n = str2.length();

    for (int i = 0; i < n; i++)
    {
        result += str2[i];
    }

    cout << "String after concatenate is: " << result << endl;
    // cout<<"String after concatenate is: "<< str1+str2 <<endl;

    return 0;
}
