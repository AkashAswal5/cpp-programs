/*
       Preorder traversal
*/


#include<iostream>
using namespace std;

// 1. Define data type or define structure of data members
struct node{
    int data;
    node*left;
    node*right;
};

// 2. function to add data members
node* newnode(int data){
   // create new node
   node* temp=new node();
   temp->data=data;
   temp->left=NULL;
   temp->right=NULL;
}

// 4. function to print preorder trr
void printpreorder(node*node){
   if(node==NULL){
    return ;
   }
    cout<<node->data<<" ";
   printpreorder(node->left);
   printpreorder(node->right);
}
 
int main(){
  // 3. create data members
  node*root=newnode(1);
 root->left=newnode(2);
 root->right=newnode(3);
 root->left->left=newnode(4);
root->left->right=newnode(5);
    
cout<<"preorder Traversal: "<<endl;
printpreorder(root);

    return 0;
}
