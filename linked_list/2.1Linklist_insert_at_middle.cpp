#include <iostream>
using namespace std;

// define structure or datatype for linklist
struct node
{
    int data;
    node *next;
};

// function to print linklist
void print_linklist(node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

node *add_data_in_middle_of_linklist(node *previous, int newdata)
{
    if (previous == NULL)
        return NULL; // Safety check to prevent segmentation faults

    node *newnode = new node(); //  Create a new node dynamically

    node *next1 = previous->next; //  Store the next node for linking
    newnode->data = newdata;      //  Assign data to the new node

    previous->next = newnode; //  Link the previous node to the new node
    newnode->next = next1;    //  Link the new node to the stored next node

    return newnode; //  Return the new node
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

    // suppose we need to add a data 6 after 3 and before 4

    // make a function for this

    add_data_in_middle_of_linklist(third, 6);
    print_linklist(head);
    return 0;
}
