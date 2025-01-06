/*       vector of pair
A vector of pairs is a data structure that combines the functionality of a vector and a pair in C++.
It allows you to store multiple pairs, where each pair holds two values of potentially different types.
The vector stores these pairs as elements,
and you can dynamically add, remove, or
access pairs in the vector.

        vector<pair<T1, T2>> v;

*/

#include <iostream>
#include <vector>
#include <utility> // library for pairs
using namespace std;

int main()
{

    // vectors of pairs
    vector<pair<int, string>> v;

    // adding pairs to the vector
    v.push_back({1, "apple"});
    v.push_back({2, "banana"});
    v.push_back({3, "cherry"});

    // Accessing and printing pairs
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }

    return 0;
}
