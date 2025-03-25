#include <iostream>
using namespace std;

// Define data type for doubly linked list
struct node
{
    int data;
    node *next;
    node *prev;
};

// Function to print the doubly linked list
void printlinkedlist(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to insert at the end of the doubly linked list
node *Insert_at_last_of_Double_linked_list(node *last_node, int last_node_data)
{
    if (last_node == NULL)
    {
        cout << "Previous last node cannot be NULL." << endl;
        return nullptr;
    }

    // Create new last node
    node *new_last_node = new node();
    new_last_node->data = last_node_data;
    new_last_node->next = NULL;
    new_last_node->prev = last_node;

    // Update previous last node's next pointer
    last_node->next = new_last_node;

    return new_last_node; // Return the new last node
}

int main()
{
    // Create the head node
    node *head = new node();
    head->data = 5;
    head->next = nullptr;
    head->prev = nullptr;

    node *last = head; // Maintain a pointer to track the last node

    // Insert elements at the end of the list
    last = Insert_at_last_of_Double_linked_list(last, 2);
    last = Insert_at_last_of_Double_linked_list(last, 3);
    last = Insert_at_last_of_Double_linked_list(last, 4);
append(&last,9);
    // Print the linked list
    printlinkedlist(head);

    return 0;
}
