#include<iostream>
using namespace std;

int linearSearch(int arr[] , int n , int key){
    
    for(int i=0 ; i<n ; i++){
        if(arr[i]==key){
            return i;
        }             // time complexity O(n)

    }return -1;


}

int main(){

    //linear search
int n;
cin>>n;

int arr[ n ] ;
for(int i=0 ; i<n ;  i++){
    cin>>arr[i];
}

int key;
cin>>key;

cout<<linearSearch(arr , n ,key)<<endl;   //return index of first key found



    return 0;
}
