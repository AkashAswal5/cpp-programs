/*     Sort a Vector of Pairs
Problem: Sort a vector of pairs based on the first element of each pair,
and if the first elements are equal,
 then sort based on the second element.
*/

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<pair<int, int>> v = {{3, 1}, {2, 5}, {1, 4}};
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        sort(v.begin(), v.end());
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << "(" << v[i].first << " , " << v[i].second << ") " << endl;
    }

    return 0;
}
