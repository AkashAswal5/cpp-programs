#include<iostream>
#include<climits>
using namespace std;
int main(){

int n;
cout<<"enter n: ";
cin>>n;

int arr[n];
cout<<"enter number in a array";
for(int i=0 ; i<n ; i++){
    cin>>arr[i];
}
int maxsum=INT_MIN;

for(int i=0 ; i<n ; i++){
    for(int j=i ; j<n ; j++){
        int sum=0;
        for(int k=i ; k<=j ; k++){
            cout<<arr[k]<<" ";
            sum+=arr[k];
            
        }cout<<" sum "<< sum;
        cout<<endl;
        maxsum=max(maxsum,sum);

    }
}
cout<<"Max Sum" << maxsum<<endl;
    return 0;
}


// Time Complexity of 3 nested loop use above is (O)n^3
