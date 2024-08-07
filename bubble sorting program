/*  bubble sort : repeatedly steps through the list, 
compares adajacent elements, and swaps them if they are in wrong order
*/

#include<iostream>
using namespace std;
int main(){

int n ;
cout<<"enter n: ";
cin>>n;

int arr[n];
cout<<"enter number in a array";
for(int i=0 ;i<n ; i++){
    cin>>arr[i];
}
int counter=1;
while(counter<n){
    for(int i=0 ; i<n-counter  ; i++){
        if(arr[i]> arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }

    }counter++;
}

for(int i=0 ; i<n ; i++){
    cout<<arr[i]<<" ";
}
    return 0;
}
