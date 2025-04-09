/*
 Inorder Traversal
 
*/

#include<iostream>
using namespace std;

// 1. define data type or structure for tree
struct node{
    int data;
    node*left;
    node*right;
};

// 2. function to add new members in the tree
node* newNode(int data){
   node* temp=new node();
   temp->data=data;
   temp->left=NULL;
   temp->right=NULL;

   return temp;
}

// 4. print 
void printInorder(node*node){
    if(node ==NULL){
        return ;
    }
/* First traverse left part of tree */
// Recursion
printInorder(node->left);

/* Then print data */
 cout<<node->data<<" ";

 /* Then traverse right   part of tree*/
printInorder(node->right);
}

int main(){
 // 3. create a tree
 node*root=newNode(1);
 root->left=newNode(2);
 root->right=newNode(3);
 root->left->left=newNode(4);
 root->left->right=newNode(5);

 cout<<"Inorder Traversal of tree: "<<endl ;
printInorder(root);

    return 0;
}
