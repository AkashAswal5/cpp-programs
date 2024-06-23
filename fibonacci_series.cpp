#include<iostream>
using namespace std;

int fibonacci(int n){

int sum=0;
    int alpha =1;
int a=0;

for(int i=0 ; i<=n ; i++){
    
    cout<< sum << " ";     // sum=0 alpha =1
    a=alpha;
alpha =sum; // alpha =0
sum=a; //sum=1

    sum=sum+alpha; // sum=1 
    //sum=1 alpha=1
}

}

int main(){

// fibenacci Sequence
// 0 , 1 ,1, 2, 3 ,5 , 8 , 13  , 21 , .. ... . .. . 

int num;

cin>>num;
fibonacci(num);

return 0;
}
