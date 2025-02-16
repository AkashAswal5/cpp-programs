#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node *newnode(int data)
{
    node *element = new node();
    element->data = data;
    element->left = NULL;
    element->right = NULL;

    return element;
}



// node *newnode(int data)
// {
//     node *node = new struct node();
//     node->data = data;
//     node->left = NULL;
//     node->right = NULL;

//     return node;
// }

void printnode(node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->left;
    }
    cout<<endl;
}
int main()
{
    // make root node
    node * root=newnode(1);
    /*
             1
            /  \
         NULL  NULL
    */

    root->left=newnode(2);
 /*
             1
            /  \
           2   NULL
          /  \
        NULL  NULL
    */
   root->right=newnode(3);

root->left->left=newnode(4);

printnode(root);

    return 0;
}
