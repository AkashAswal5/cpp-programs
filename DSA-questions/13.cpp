/*
13.	Remove duplicates from an array: 
Description: Remove all duplicate elements from an array. 
Example: 
Input: [1, 2, 2, 3, 3] 
Output: [1, 2, 3]  */

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter how many number you want to enter";
    cin>>n;

    int arr[n];
    cout<<"Enter number in a array: ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }


    return 0;
}
