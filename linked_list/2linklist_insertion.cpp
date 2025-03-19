/*
       insert a node in Linklist
 insert at front --> insert at middle  --> insert at bottom/end
*/

/*
   Smallest unit in linklist is node 
    where node has data and address of next node
*/

/*

dynamicaly insert element in linklist is easy/cheap

*/


// insert at front

#include<iostream>
using namespace std;

// create datatype for node 
struct node{
    int data;
    node* next;
};

// code to print a linklist
void printlinklist(node *n){
    int count=0;
    while(n!=NULL){
        cout<<n->data <<endl;
        n=n->next;
        count++;
    }
    cout<<"No. of elements in linked list: "<<count<<endl;
}

node *push_at_front(node*head, int newData){
    node *newnode=new node();
    newnode->data=newData;
    newnode->next=head;
    head=newnode;
    return head;
}
int main(){
    
    node *head=NULL;
    head=push_at_front(head,5);
    head=push_at_front(head, 7);

    printlinklist(head);
    return 0;
}
