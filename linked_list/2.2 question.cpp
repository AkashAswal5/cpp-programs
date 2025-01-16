// To create an array of node type pointer variables where each pointer links to another node

#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void printnodes(node *n)
{
    while (n != NULL)
    {
        cout << n->data << "-> ";
        n - n->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *nodes[5];

    for (int i = 0; i < 5; i++)
    {
        nodes[i] = new node();
        nodes[i]->data = i;
        nodes[i]->next = NULL;
    }

    for (int i = 0; i < 4; i++)
    {
        nodes[i]->next = nodes[i + 1];
    }

    printnodes(nodes[0]);

    for (int i = 0; i < 5; i++)
    {
        delete nodes[i];
    }
    return 0;
}
