/*
       Pass by reference
Pass by reference means passing the address of a variable to a function, 
instead of a copy of its value. 
This allows the function to modify the original variable.

*/

#include<iostream>
using namespace std;

//pass by value (does not modify original variable)
void passbyVALUE(int a){
    a=a*2;
}

// pass by reference (modifies original variable)
void passByReference(int &b){
    b=b*2;
}


int main(){

    int x=5, y=5;

    passbyVALUE(x);
    cout<< "After PassByValue, x= "<<x<<endl; //x remain 5

    passByReference(y);
    cout<<"After passByReference, y= "<<y<<endl;  // y is modifies to 10

    return 0;

}