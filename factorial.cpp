#include<iostream>
using namespace std;

int  fact(int n){
    int factorial=1;
    for(int i=1 ; i<=n ; i++){
        
        factorial = factorial*i;
    }

    return factorial ;


}


int main(){

// factorial of a number n

int num;
cin>>num;

cout<<fact(num);

    return 0;
}
