#include<iostream>
#include<stack>
using namespace std;

void reverse(string s){
    stack<char> str ;

    //push all character of the string into the stack

    for(char ch:s){
        str.push(ch);
    }
//pop character from the stack and form the reverse string

string reversed="";
while(!str.empty()){
    reversed+=str.top();
    str.pop();
}

cout<<"Reversed String: "<<reversed<<endl;

}
//reverse string using stack
int main(){

string s="";
cout<<"enter string to reverse: ";
cin>>s;

reverse (s);
    return 0;
}
