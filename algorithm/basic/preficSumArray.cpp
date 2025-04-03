// prefix sum array 

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int a[]={10,20,30,15,10};
    int psa[5];  // prefix sum array

    for(int i=0 ;i<5 ; i++){
 if(i==0){
    psa[i]=a[i];
 }

 else{
    psa[i]=psa[i-1]+a[i];
 }
    }

    // print prefix sum array
 for(int i=0; i<sizeof(psa)/sizeof(psa[0]); i++){
    cout<<psa[i]<<" ";
 }

    return 0;
}
