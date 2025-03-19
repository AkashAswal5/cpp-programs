#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

// function to print linklist when we give only head
void printlist(node *n)
{
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->next;
    }
}
/*
     new  --> keyword  ---> constructor

The new keyword in C++ is used to dynamically allocate memory on the heap at runtime.
It returns a pointer to the allocated memory, allowing flexibility in memory management.

            Syntax --->   pointer_variable = new data_type;

*/
int main()
{

    node *head = new node();
    node *second = new node();
    node *third = new node();
/*
    -> (arrow) symbol: use in pointer as a reference.
*/
    head->data = 5;
    head->next = second;

    second->data = 1;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printlist(head);
    return 0;
}
