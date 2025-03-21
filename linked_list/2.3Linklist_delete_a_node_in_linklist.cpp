// delete a node in Linklist

#include <iostream>
using namespace std;

// define a data type or data-structure for linklist or node
struct node
{
    int data;
    node *next;
};

// print a data in linklist --> when head node  is passed

void print_linklist(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// function to delete a node in linklist  --> we will pass a node to delete and its data  to delete

node *delete_a_linkist(node *head, node *node_before_delete_one, node *node_to_delete)
{
    if (node_to_delete == nullptr)
    {
        return head;
    }

    if (node_to_delete == head)
    {
        // if deleting head node, update head
        head = head->next;
        delete node_to_delete;
        return head;
    }

    node_before_delete_one->next = node_to_delete->next;
    delete node_to_delete;
    return head;
}

int main()
{

    // define or create a data member or data type

    node *head = new node();
    node *second = new node();
    node *third = new node();
    node *fourth = new node();
    node *fifth = new node();

    // assign value to the new create data members

    head->data = 11;
    head->next = second;

    second->data = 12;
    second->next = third;

    third->data = 13;
    third->next = fourth;

    fourth->data = 14;
    fourth->next = fifth;

    fifth->data = 15;
    fifth->next = NULL;

    print_linklist(head); // 11 12 13 14 15

    // delete a fourth node -->14

    delete_a_linkist(head, third, fourth);

    print_linklist(head); // 11 12 13 15

    return 0;
}
