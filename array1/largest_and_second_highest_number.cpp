// find largest element in the array

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int largestelement(vector<int> &arr){

    int largest=arr[0];
    for(int i=0 ; i<arr.size() ; i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    return largest;
}


int second_largest_element(vector<int> & arr){

    if (arr.size() < 2) return -1; // Handle case where second largest doesn't exist


     int largest=INT_MIN;
     int second_largest=INT_MIN;

     for(int i=0 ;i<arr.size() ; i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }


       else if(arr[i]>second_largest && arr[i]!=largest){
            second_largest=arr[i];
        }
     }

     return(second_largest==INT_MIN) ? -1:second_largest;
}

int main(){

    vector<int> arr={12,35,11,10,34,1};
cout<<"LARGEST ELEMENT: "<< largestelement(arr);
cout<<"\n Second largest Element: "<<second_largest_element(arr);
    return 0;
}
