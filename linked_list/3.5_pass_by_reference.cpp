
#include <iostream>
using namespace std;

// define structure for linked list
struct node
{
    int data;
    node *next;
};

// print linked list
void printlist(node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

// add element in linked list
// node* push(node *head, int newdata)
// {
//     node *newnode = new node();
//     newnode->data = newdata;
//     newnode->next = head;
//     head = newnode;

//     return head;

// }

node *push(node **head_ref, int new_data){
    node*new_node=new node();
    new_node ->data=new_data;   
    new_node
}

// head reference --> pointer of pointer

int main()
{
    node *head = NULL;
    //    head= push(head, 5);
    //     head= push(head, 7);

    

    printlist(head);
    return 0;
}
