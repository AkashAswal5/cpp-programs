
#include<iostream>
#include<limits.h>
#include<cmath>
#include<algorithm>

using namespace std;
int main(){
int nums[]={5,14,32,1,-334,43,3};
int size=7;

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
cout<<"largest = "<<largest<<endl;
int small=INT_MAX , large=INT_MIN;
for(int i=0 ;i<size; i++){

 small=min(nums[i] , smallest);
large=max(nums[i], large);

}

cout<<"Small = "<<small<<" & large =  "<<large<<endl;
    return 0;
}
