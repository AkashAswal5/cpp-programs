/*
15.	Find the length of a string without using built-in functions
Description: Manually count the number of characters in a string.
Example:
Input: "hello"
Output: 5
*/

#include <iostream>
using namespace std;
int main()
{
    char str1[100];
    cout << "Enter a String: ";
    cin.getline(str1, 100);

    int count = 0;

    while (str1[count] != '\0')
    {
        count++;
    }

    cout << "Length of the string: " << count << endl;

    return 0;
}
