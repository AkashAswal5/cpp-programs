#include<iostream>
using namespace std;

int linearsearch(int n , int arr[], int key){
    int temp;

    for(int i=0 ; i<n ; i++){
            if(arr[i]==key){
        return i+1;
    }
    }return -1;

}

int  binarysearch(int n , int arr[] , int key){
    int s=0 ,e=n-1;
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

int main(){

int n;
cout<<"enter n: ";
cin>>n;

int arr[n];
cout<<"enter number in an array: ";
for(int i=0 ; i<n ; i++){
    cin>>arr[i];
}

int key;
cout<<"enter key";
cin>>key;



//linear search
cout<< "linear search:  " <<linearsearch(n,arr,key) <<endl;

//binary search
cout<<"binary search:  " << binarysearch(n,arr,key);

return 0;
}
