/*
Insert at the End

Insert a new node with given data at the end of a linked list.
Hint: Traverse until next == NULL, then attach the new node.
*/

#include <iostream>
using namespace std;

// structure or data type declaration for linklist
struct node
{
    int data;
    node *next;
};

// print a linklist using recursion
void print_linklist(node *head)
{
    if (head == nullptr)
    {
        return;
    }
    cout << head->data << " ";
    return print_linklist(head->next);
}

node *insert_at_end(node *head, int new_data_to_add)
{
    node *new_node = new node(); // create new last node

    new_node->data = new_data_to_add;
    new_node->next = NULL;

    if (head == NULL)
    {
        return new_node; // if list is empty, new node becomes the head
    }

    node *temp = head;
    while (temp->next != NULL)
    { // Traverse to the last node
        temp = temp->next;
    }
    temp->next = new_node; // Attach new node at the end

    return head;
}

int main()
{

    // define data members for linlist
    node *head = new node();
    node *second = new node();
    node *third = new node();
    node *fourth = new node();
    node *fifth = new node();

    head->data = 5;
    head->next = second;

    second->data = 6;
    second->next = third;

    third->data = 7;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = fifth;

    fifth->data = 2;
    fifth->next = NULL;

    print_linklist(head); // 5 6 7 8 2
    cout << endl;
    // add 99 after the last node
    head = insert_at_end(head, 99);
    head = insert_at_end(head, 0);
    head = insert_at_end(NULL, 0);

    print_linklist(head);
    cout << endl;

    return 0;
}
