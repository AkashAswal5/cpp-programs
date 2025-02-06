/*
12.	Check if a number is a factor of another number 
Description: Check if one number is a prime factor of another number. 
Example: 
Input: 10, 20 
Output: True (10 is a factor of 20) 
*/

#include<iostream>
using namespace std;
int main(){
int n1 , n2;
cout<<"Program to check if a number is a factor of another number";
cout<<"Enter num1: ";
cin>>n1;
cout<<"enter num2: ";
cin>>n2;

if ( n1<n2) {
if(n2%n1==0){
    cout<<"True "<<n1<<" is Factor of "<<n2;
}
};
else{
    cout<<n1<< " is not factor of "<<n2;
}

    return 0;
}
