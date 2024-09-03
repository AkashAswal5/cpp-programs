#include<iostream>
using namespace std;

int main(){

//subarry problem

int n ; 
cout<<"Enter n : ";
cin>>n;

int arr[n];
cout<<"enter number in a array";
for(int i=0 ;i<n ; i++){
    cin>>arr[i];
}

int maxsum=0;

// all the subarray of the aray are

for(int i=0 ; i<n ; i++){
    int currentsum=0;
    for(int j=i ; j<n ; j++){
        currentsum +=arr[j];
        cout<<" sunarray: ";
        for(int k=i ; k<=j ; k++){
            cout<<arr[k]<<" ";
        }
           cout<< " | sum : "<< currentsum<< endl;

           if( currentsum>maxsum){
            maxsum=currentsum;
           }
    }
}
cout<<" Maximum sum of all subarray : "<<maxsum <<endl;
    return 0;
}
