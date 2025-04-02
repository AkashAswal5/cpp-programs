/*
       Check if Key Exists
Problem:
Write a program to check if a given key exists in an unordered_map<int, string>.

*/

#include <iostream>
#include <unordered_map>

using namespace std;
int main()
{

    // define unordered map
    unordered_map<int, string> s;

    // insert elemenet in unordered map
    s = {{1, "A"}, {2, "B"}, {3, "C"}, {4, "D"}};
    //  key  value
    s[11] = "K";

    int key = 11;
    if (s.find(key) != s.end())
    {
        cout << "key found";
    }
    else
    {
        cout << "key not found." << endl;
    }

    return 0;
}
