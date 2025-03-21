/*
sum of  numbers from N to 1 using recursion.

Input: N = 5
Output: 5 +4 +3 +2 +1 => 15

*/

#include <iostream>
using namespace std;

/*
 In a recursive approach, we break the problem into smaller subproblems and solve them recursively.

  Definition: A function that calls itself until a base condition is met.

     Two Key Parts of a Recursive Function:

1. Base Case → The condition where recursion stops.
2. Recursive Case → The function calls itself with a smaller subproblem.

*/

int recursive(int n)
{
    // base condition
    if (n == 0)
    {
        return 0;
    }

    // recursive case
    return n + recursive(n - 1);
}

int main()
{
    int n = 3;
    cout << " enter a number to count its sum: ";
    cin >> n;

    cout << " SUM: " << recursive(n) << endl;

    return 0;
}