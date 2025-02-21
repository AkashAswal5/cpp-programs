/*
10.	Sum of perfect squares in a range:
Description: Calculate the sum of all perfect squares between two numbers.
Example:
Input: 1 to 10
Output: 1 + 4 + 9 = 14
*/

#include<iostream>
using namespace std;
        
int main(){
    int n, m, sum=0;
    cout<<"Enter range of numbers: ";
    cin>>n>>m;
    
    // Validate input
    if (n > m || n < 0 || m < 0) {
        cout << "Not a valid expression";
        return 0;
    }

    // Find the smallest i such that i*i >= n
    int i = 1;
    while (i * i < n) {
        i++;
    }
    
    // Sum all perfect squares between n and m
    for (; i * i <= m; i++) {
        sum += i * i;
    }

    cout << "SUM: " << sum;
    return 0;
}
