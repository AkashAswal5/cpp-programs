#include<iostream>
using namespace std;

int sum(int num){
    int sum1=0;
    for(int i=0 ; i<=num ; i++){
        sum1+=i;
    }
    cout<<sum1;


}

int main(){

int n;
cin>>n;
sum(n);


    return 0;
}
