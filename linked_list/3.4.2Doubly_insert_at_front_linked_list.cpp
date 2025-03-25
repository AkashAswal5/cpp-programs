/*
         Doubly Linked List
Doubly Linked list --> contain extra pointer, typically  called PREVIOUS POINTER

Advantages of Doubly Linked List
 --> Node can be easily Traversed in both direction
 --> we can eaily insert a node before a given node

Disadvantages of Doubly Linked List
 --> We need to maintain a extra pointer
 --> all operations require an extra pointer previous to be maintained

*/

#include <iostream>
using namespace std;

/*  create data type or define data member for Doubly linked list */
struct node
{
    int data;
    node *next;
    node *prev;
};

/* print the Doubly Linked List */
void printList(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

/* insert a node at front in Doubly Linked List */

void push(node **head_ref, int new_data)
{
    node *new_node1 = new node(); // declare new node

    new_node1->data = new_data;
    new_node1->next = *head_ref; // new node point to old head
    new_node1->prev = nullptr;   // New node is now the first node

    // If list is not empty, update previous head's previous pointer
    if (*head_ref != nullptr)
    {
        (*head_ref)->prev = new_node1;
    }

    // update head_ref to point to new node (modifies actual head)
    *head_ref = new_node1;
}

int main()
{
    node *head = nullptr;

    push(&head, 10); // Insert 10 at front
    push(&head, 20); // Insert 20 at front
    push(&head, 30); // insert 30at front

    printList(head);  // 30 20 10 
    return 0;
}