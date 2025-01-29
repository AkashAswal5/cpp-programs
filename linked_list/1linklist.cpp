/*
      What is a Linked List?
A linked list is a linear data structure where elements, called nodes, are connected using pointers. Each node contains two parts:

Data: Stores the value.
Next: A pointer to the next node in the sequence.
           Unlike arrays, linked lists do not have a fixed size and allow efficient insertion and deletion operations.

      Types of Linked Lists
Singly Linked List: Nodes are linked in a single direction.
Doubly Linked List: Nodes have pointers to both the previous and next nodes.
Circular Linked List: The last node points to the first node, forming a circle.

*/

// Code to Create and Traverse a Linked List

#include <iostream>
using namespace std;

// Define a Node structure
struct Node {
    int data;       // Data part of the node
    Node* next;     // Pointer to the next node
};

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;  // Start from the head node
    while (temp != nullptr) {
        cout << temp->data << " -> ";  // Print the data
        temp = temp->next;            // Move to the next node
    }
    cout << "NULL" << endl;           // End of the list
}

int main() {
    // Create nodes
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Initialize data and connections
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = nullptr;

    // Print the linked list
    // we will give head and it will print all the linklist 
    printList(head);

    // Free the allocated memory
    delete head;
    delete second;
    delete third;

    return 0;
}
