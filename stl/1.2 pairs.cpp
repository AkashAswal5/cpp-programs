// swap two number using pair

#include <iostream>
using namespace std;
#include <utility> // library for pairs
int main()
{

    int a = 5, b = 10;
    // declare pair
    pair<int, int> p{a, b};
    // int temp;
    // temp=p.first;
    // p.first=p.second;
    // p.second=temp;

    // direct method
    swap(p.first, p.second);

    cout << p.first << " " << p.second;

    return 0;
}
