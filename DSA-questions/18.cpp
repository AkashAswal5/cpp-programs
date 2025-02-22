/*18.
Reverse a string  15
Description: Write a program to reverse the characters of a given string.
Example:
Input: "hello"
Output: "olleh"
*/

#include <iostream>
#include <cstring>
using namespace std;
int main()
{

    char str1[100];
    cout << "Enter a String: ";
    cin.getline(str1, 100);

    int len = strlen(str1);

    for (int i = len=1 ; i >= 0; i--)
    {
        cout << str1[i];
    }
    return 0;
}
