/*
       postorder traversal
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
void printpostorder(node*node){
   if(node==NULL){
    return ;
   }
    
   printpostorder(node->left);
   printpostorder(node->right);
   cout<<node->data<<" ";
}
 
int main(){
  // 3. create data members
  node*root=newnode(1);
 root->left=newnode(2);
 root->right=newnode(3);
 root->left->left=newnode(4);
root->left->right=newnode(5);
    
cout<<"postorder Traversal: "<<endl;
printpostorder(root);

    return 0;
}
