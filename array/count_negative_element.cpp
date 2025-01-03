//  Count the Number of Negative Numbers in an Array

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of element in array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the number in the array: ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

int count=0 ; 
for(int i=0 ; i<n ; i++){
    if(arr[i]<0){count++;}
}

cout<<"no. of negative element is: "<<count<<endl;
    return 0;
}
