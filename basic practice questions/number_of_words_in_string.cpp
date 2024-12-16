// count the number of words in string

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;                   // This will store the input sentence.
    cout << "Enter a string: ";
    getline(cin, str);            // Input the whole sentence, including spaces.

    int count = 0;                // Variable to count the number of words.
    bool inWord = false;          // Flag to check if we are inside a word.

    for (int i = 0; i < str.length(); i++) {   // Go through each character in the string.
        if (str[i] != ' ' && !inWord) {        // If we see a non-space and we are not already in a word:
            count++;                           // This means a new word has started, so increment the count.
            inWord = true;                     // Mark that we are now inside a word.
        } else if (str[i] == ' ') {            // If we see a space:
            inWord = false;                   // Mark that we are no longer inside a word.
        } 
    }
    cout << "Number of words: " << count << endl;   // Print the total word count.
    return 0;                            // Exit the program.
}

 
