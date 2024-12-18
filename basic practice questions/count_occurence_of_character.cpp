//  Count the Occurrence of a Character 
//  Count how many times a specific character appears in a string. 
#include <iostream>
#include <string> // Correct lowercase header for string
using namespace std;

int main() {
    string str1;
    cout << "Enter string: ";
    getline(cin, str1); // Read the full string, including spaces

    char ch;
    cout << "Enter a character to count its occurrence: ";
    cin >> ch;

    int count = 0;

    // Count occurrences of the character
    for (char c : str1) { // Use range-based for loop for simplicity
        if (c == ch) {
            count++;
        }
    }

    cout << "'" << ch << "' occurs " << count << " times." << endl;

    return 0;
}
