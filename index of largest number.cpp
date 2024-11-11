#include<iostream>
#include<limits.h>
#include<cmath>
#include<algorithm>

using namespace std;
int main(){
int nums[]={5,14,32,1,-334,43,3};
int size=7;

// print array
cout<<"Array is : ";
for(int i=0 ; i<size ; i++){
    cout<<nums[i]<<" ";
}

cout<<endl;

int smallest=INT_MAX;
for(int i=0 ;i<size; i++){
    if(nums[i]<smallest){
        smallest=nums[i];
    }
}
cout<<"Smallest = "<<smallest<<endl;

int largest=INT_MIN;
for(int i=0 ; i<size; i++){
    if(nums[i]>largest){
        largest=nums[i];
        
    }
}
cout<<"largest = "<<largest;

// print index of largest number 
for(int i=0 ; i<size; i++){
    if(nums[i]==largest){
        cout<<"  Index of largest number : "<<i+1 <<endl;
    }
}

int small=INT_MAX , large=INT_MIN;
for(int i=0 ;i<size; i++){

 small=min(nums[i] , smallest);
large=max(nums[i], large);

}

cout<<"Small = "<<small<<" & large =  "<<large<<endl;
    return 0;
}
