/*
Print numbers from 1 to N using recursion.

Input: N = 5
Output: 1 2 3 4 5

*/

#include<iostream>
using namespace std;


void printNumbers(int n, int current = 1) {
    // Base Case: If current exceeds N, stop recursion
    if (current > n) return;

    // Print the current number
    cout << current << " ";

    // Recursive Call: Print the next number
    printNumbers(n, current + 1);
}

int main(){

    int n;
    cout<<" enter number: ";
    cin>> n;

    cout << "Output: ";
    printNumbers(n);
    cout << endl;
    
    return 0;
}