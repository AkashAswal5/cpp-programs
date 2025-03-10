#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
// int x=20;
// // declare pointer variable
// int *ptr;

//  ptr=&x;

// cout<<ptr<<endl;
// cout<<*ptr<<endl;

// cout<<&x<<endl;
// cout<<x<<endl;

// cout<<&ptr<<endl;
// cout<<*ptr<<endl;
     
// int **ptr1;
// ptr1=&ptr;

// cout<<&ptr<<endl;
// cout<<**ptr1<<endl;

int a[]={22,3,5,7};
int *ptr;
ptr=a;// automatically stores address of first index

int * ptr1;

cout<<ptr<<endl;
// srong --> ptr=&a;

ptr1= &a[0];

cout<<ptr<<endl;
cout<<ptr1<<endl;
    return 0;
}
