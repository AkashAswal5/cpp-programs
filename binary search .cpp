//binary search 


#include <iostream>
using namespace std;

int binarysearch(int n , int arr[] , int key){
    int s=0 , e=n ;
while (s<=e){
    int mid=(s+e)/2;

if(arr[mid]==key){
    return mid;
}
else if (arr[mid]>key){
    e=mid-1;
}
else {
    s=mid+1;
}
}
return -1;
}

int main(){

int n;
cout<<"enter n " <<endl;
cin>>n;

cout << "enter number in array :  " <<"endl ";
int arr[n];

for (int i=0 ; i<n ; i++){
    cin>>arr[i];
}

int key;
cout<<"enter key " ;
cin>> key;

cout<<binarysearch(n , arr , key);

    return 0;
}
