#include<iostream>
using namespace std;

int binarysearch(int n, int arr[] , int key){
    int s=0 , e=n;
    while(s<=e){
        int mid=(s+e)/2;

        if(arr[mid]==key){
            return mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

        return -1;
    }


//binary search : 
int main(){
    int n ; 
    cout<<"enter a number: ";
    cin>>n;

    int arr[n];
    cout<<"enter number in a array: ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"enter key : ";
    cin>>key;

    cout<<binarysearch(n,arr , key);


    return 0;
}
