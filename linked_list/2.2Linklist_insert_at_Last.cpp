// Add data in the Last of the LINKLIST

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// define data type and structure
struct node
{
    int data;
    node *next;
};

// function to print a linklist --> when head is given

void print_linklist(node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

node *add_data_in_last_of_linklist(node *previous_last_node1, int lastnodedata)
{

    if (previous_last_node1 == nullptr)
    {
        cout << "Error: previous last node is NULL! " << endl;
        return nullptr;
    }
    node *lastnode = new node();
    lastnode->data = lastnodedata;
    lastnode->next = nullptr;

    previous_last_node1->next = lastnode;
    return lastnode; // return the new last node
}
int main()
{

    // define or create node --> data element
    node *head = new node();
    node *second = new node();
    node *third = new node();
    node *fourth = new node();
    node *fifth = new node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = nullptr;

    print_linklist(head); //  1 2 3 4 5

    // suppose we need to add a data 6 at last
    // make a function for this

    fifth = add_data_in_last_of_linklist(fifth, 6);
    fifth = add_data_in_last_of_linklist(fifth, 7);

    print_linklist(head);
    return 0;
}
