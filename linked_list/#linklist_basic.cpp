#include <iostream>
using namespace std;

// linklist data type define
struct node
{
    int data;
    node *next;
};

void printdata(node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{

    // define / create the data members

    node *head = new node();
    node *second = new node();
    node *third = new node();

    // assign value to pointer variables ( data variables )  & link a node to next node
    head->data = 5;
    head->next = second;

    second->data = 6;
    second->next = third;

    third->data = 8;
    third->next = nullptr;

    // now print a data in each node ( linklist )

    // we will give head and it will print the whole linklist
    printdata(head);
    return 0;
}
