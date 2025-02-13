/*
19.	Find the Number of Unique Elements in an Array:   
Description: Count the distinct elements in an array. 
Input: [1, 2, 2, 3, 4, 4, 5] 
*/

#include<iostream>
using namespace std;

int uniqueelement(int arr[],int n){
    int count=0;
    for(int i=0 ; i<n; i++){
        for(int j=i+1; j<n ; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
    }
    cout<<count;
}
int main(){
     int n;
     cout<<"Enter how many number to Enter: ";
     cin>> n;

    int arr[n];
    cout<<"Enter number of element in an array: ";
    for(int i=0; i<n ; i++){
        cin>>arr[i];
    }

    uniqueelement(arr,n);
    
    return 0;
}
