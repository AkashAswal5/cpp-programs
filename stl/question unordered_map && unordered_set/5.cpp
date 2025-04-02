/*
        Find First Non-Repeating Character in a String
Problem:
Find the first non-repeating character in a string.

*/

#include <iostream>
#include <unordered_map>
using namespace std;
char firstNonRepeatingCharacter(const string &str)
{
    unordered_map<char, int> count;

    for (char ch : str)
    {
        count[ch]++;
    }

    for (char ch : str)
    {
        if (count[ch] == 1)
        {
            return ch;
        }
    }
    return '_'; // NO unique character found
}

int main()
{

    string str = "axabbcdd";

    char result = firstNonRepeatingCharacter(str);

    if (result != '_')
    {
        cout << "First non-repeating character: " << result << endl;
    }
    else
    {
        cout << "No unique character found" << endl;
    }

    return 0;
}
