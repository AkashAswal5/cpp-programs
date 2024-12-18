// check if two string are anagrams to each other

/* Anagrams are words that can be formed by rearranging the letters of another word*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str1, str2;
    
    cout << "Enter string 1: ";
    cin >> str1;

    cout << "Enter string 2: ";
    cin >> str2;

    // Check if lengths are different
    if (str1.length() != str2.length()) {
        cout << "Not valid anagrams" << endl;
        return 0;
    }

    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    // Compare sorted strings
    if (str1 == str2) {
        cout << "Valid anagram" << endl;
    } else {
        cout << "Not valid anagrams" << endl;
    }

    return 0;
}
