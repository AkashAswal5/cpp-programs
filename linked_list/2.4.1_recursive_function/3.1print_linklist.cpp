/*
Print a Linked List

Given the head of a linked list, print all elements using recursion.
Hint: Base case → If head is NULL, return. Otherwise, print and recurse on head->next.

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
    cout<<head->data<<" ";
    return print_linklist(head->next);


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

    print_linklist(head);
    return 0;
}
