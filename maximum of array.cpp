#include<iostream>
#include<climits>
using namespace std;
int main(){

int n ;
cout<<"enter N: ";
cin>>n;

int arr[n];
cout<<"enter number in array : ";
for(int i=0 ; i<n ; i++){
    cin>>arr[i];
}

int maxi=INT_MIN;

for(int i=0 ; i<n ; i++){
   maxi=max(maxi,arr[i]);
   cout<<maxi <<endl ;
}

cout<<maxi;

    return 0;
}
