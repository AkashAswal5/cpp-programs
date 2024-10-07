// // second largest element in arrray

// #include<iostream>
// #include<algorithm> // for sorting a array 
// #include<vector>
// #include<limits.h>


// using namespace std;

// int main(){

// vector<int> arr={1,2,4,7,7,71 ,71 ,98,71,5};
// int n=6;

// int largest=INT_MIN;
// int second_large=INT_MIN;

// for(int num:arr){
//     if(num>largest){
//         largest=num;
//     }
// }

// for(int num:arr){
//     if(num>second_large && num<largest){
//         second_large=num;
//     }
// }

// cout<<"second largest: "<<second_large<<endl;


//     return 0;
// }


#include<iostream>
using namespace std;
#include<climits>
#include<vector>

int main(){
    vector<int>arr={9,9,89,5,54,9};
    int n=arr.size();
    
    int largest=INT_MIN;
    int second_large=INT_MIN;

    for(int i=0 ; i<n ; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }

        if(arr[i]>second_large && arr[i]<largest){
            second_large=arr[i];
        }
    }

  
cout<<"Second largest element : "<<second_large;


    return 0;
}
