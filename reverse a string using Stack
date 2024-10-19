#include<iostream>
#include<stack>
using namespace std;

void reverse(string s){
    stack<char> str ;

// push all characters of the string into the stack
for(char ch:s){
    str.push(ch);
}

// pop characters from the stack and form the reversed sring
string reversed="";
while(!str.empty()){
    reversed+=str.top();
    str.pop();
}

cout<<"Reversed String: "<<reversed <<endl;

}
int main(){

// reverse string using a stack

string s;
cout<<"Enter s String to reverse: ";
cin>>s;

reverse(s);



    return 0;
}
