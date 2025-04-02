/*
     Frequency of Elements in an Array
Problem:
Given an array of integers, count the frequency of each number.

*/

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {1, 2, 1, 33, 4, 12, 1, 33, 4, 12, 1, 45};
    unordered_map<int, int> frequency;

    for (auto num : arr)
    {
        frequency[num]++;
    }

    // print frequencies
    for (const auto &pair : frequency)
    {
        cout << "Element: " << pair.first << " -> Frequency: " << pair.second << endl;
    }

    return 0;
}
