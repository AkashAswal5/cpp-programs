#include <iostream>
using namespace std;

// add , insert
// print linklist
// delete node
// size check

// linked list node
struct node
{
    int data;
    node *next;
};

void printlist(node *n)
{
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->next;
    }
}

int main()
{

    // create node and address at head, second, third
    node *head = new node();
    node *second = new node();
    node *third = new node();

    head->data = 5;
    head->next = second;

    second->data = 1;
    second->next = third;

    third->data = 5;
    third->next = NULL;

    printlist(head);

    return 0;
}
