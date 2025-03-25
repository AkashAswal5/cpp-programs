#include <iostream>
using namespace std;

// Define structure for doubly linked list
struct node
{
    int data;
    node *next;
    node *prev;
};

// Function to print a doubly linked list
void print_linkedlist(node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to insert a node after a given node (Pass by Reference)
void insert_element_at_middle_of_linked_list(node *&prev, int new_data)
{
    if (prev == nullptr)
    {
        cout << "Previous node cannot be NULL." << endl;
        return;
    }

    // Create a new node
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = prev->next;
    new_node->prev = prev;

    // If next node exists, update its previous pointer
    if (prev->next != nullptr)
    {
        prev->next->prev = new_node;
    }

    // Link the new node to the previous node
    prev->next = new_node;

    // Update prev reference to point to the new node
    prev = new_node;
}

int main()
{
    // Create the head node
    node *head = new node();
    head->data = 1;
    head->next = nullptr;
    head->prev = nullptr;

    // Use pass by reference to insert nodes
    node *current = head;
    insert_element_at_middle_of_linked_list(current, 2);
    insert_element_at_middle_of_linked_list(current, 3);
    insert_element_at_middle_of_linked_list(current, 4);

    // Print the linked list
    print_linkedlist(head);

    return 0;
}
