
// rotate left the array
#include<iostream>
#include<vector>
using namespace std;
int main(){


vector<int>arr={4,5,1,3,2};
int n=arr.size();

int d; // rotate array that much time

cin>>d;

d=d%n; // to handle case where d is larger than n

// print rotated array
for(int i=0 ; i<n; i++){
    cout<<arr[(i+d)%n]<<" ";
}
    return 0;
}
