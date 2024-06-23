#include<iostream>
using namespace std;

bool isprime(int num){
    if(num<=1)return false;
    for(int i=2 ; i*i<=num ; ++i){
        if(num%i==0){return false ;}
    }
    return true;

}


void printprime(int a, int b){
    for(int num=a ; num<=b ; ++num){
        if(isprime(num)){
            cout<<num<<" ";
        }
    }
    cout<<endl;


}


int main(){

// print prime number between two prime number

int x,y;
cin>>x>>y;

printprime(x,y);




return 0 ;
}
