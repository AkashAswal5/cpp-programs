/*
     Insert at middle of Doubly Linked List

*/

#include <iostream>
using namespace std;

// define data type or data member for Doubly Linked List
struct node
{
    int data;
    node *next;
    node *prev;
};

// print doubly linked list
void print_doubly_linkedlist(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

// function for push element in doubly Linked List

node *insert_at_middle(node *prev, int new_data)
{
    if(prev==nullptr){
        cout<<"previous node cannot be NULL. "<<endl;
        return nullptr;
    }

    node *new_node = new node();

    new_node->data = new_data;
    new_node->next = prev->next;
    
    new_node->prev=prev;


    if (prev->next != nullptr)
    {
        prev->next->prev = new_node;
    }

    prev->next=new_node; // Update prev node's next pointer
    return new_node;
}

int main()
{
    node*head=new node();
    
    head->data=3;
    head->next=nullptr;
    head->prev=nullptr;

    // Insert nodes at the middle
    node *second = insert_at_middle(head, 5);
    node *third = insert_at_middle(second, 7);
    node *fourth = insert_at_middle(third, 8);

    print_doubly_linkedlist(head);
    return 0;
}