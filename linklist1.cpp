#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node*next;

    Node(int x)  // constructor 
    {
        data=x;
        next=NULL;
    }
void insertatstart(Node*head,int x){
    Node *newnode=new Node(x);
    newnode-> next =head
}
    
};
int main(){
 Node*newnode=new Node(1); // 1 data 
 cout<<newnode ->data <<endl; // -> reference operator
 cout<< newnode ->next;  // o next node  address
}
