#include<iostream>
using namespace std;

// define structure or data type for linked list
struct node{
    int data;
    node*next;
    node*prev;
};

// print Linked List
void printLinkedlist(node*head){
 while(head!=NULL){
    cout<<head->data<< " ";
    head=head->next;
 }
}

// insert data in front of double linked list
node *push_data_in_front_of_double_linked_list(node *head, int new_data){
   
    node* new_node_1=new node();
    
    new_node_1->data=new_data;
    new_node_1->next=head;
    new_node_1->prev=nullptr;  // new node has no previous node
     
    if(head!=NULL){
        head->prev=new_node_1; // update previous pointer of old head
    }
     

    return new_node_1;  // return new head

}

int main(){
    node *head=nullptr;
    head=push_data_in_front_of_double_linked_list(head,100);
   head= push_data_in_front_of_double_linked_list(head,99);
    head=push_data_in_front_of_double_linked_list(head,98);

    printLinkedlist(head);
    return 0;
}