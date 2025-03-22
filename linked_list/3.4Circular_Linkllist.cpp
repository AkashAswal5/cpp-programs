/*
Circular Linked List --> linklist where all nodes are connected to form a Circle
 --> no NULL at the end


    Advantages of circular linklist 
    --> Any node can be a starting point
    --> in a conventional linked list, we traverse the list from the head node and
        stop the traversal when we reach NULL.

*/

#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

void printlist(node *n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }cout<<endl;
}

void print_circular_linklist(node* first){

    node*temp=first;
    if(first!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;

        while(temp!=first){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
}

int main(){

    node *head=new node();
    node*second=new node();
    node*third=new node();
    node*fourth = new node();

    head->data=5;  head->next=second;
    second->data=6; second->next=third;
    third->data=7; third->next=fourth;
    fourth->data=8; fourth->next=head; // last node point to first node
    
    // print circular linklist
    print_circular_linklist(second);
    return 0;
}
