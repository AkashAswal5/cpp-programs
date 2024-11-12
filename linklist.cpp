
#include <bits/stdc++.h>

using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    
    }

};
void Insertatstart(Node *&head ,int x){
    Node *newnode =new Node(x); 
    newnode->next =head;
    head =newnode;
}
void print(Node *head){
    Node *temp =head;
    while(temp != NULL )
    {
        cout<<temp-> data;
        temp =temp->next;
    }
}
void insertAtEnd(Node *tail , int x){
    Node *newnode=new Node(x);
    tail->next=newnode;
    tail=newnode;
}


void Insertatmiddle(Node *head, Node*tail, int pos, int x){
    Node *newnode=new Node(x);
    
    if(pos==1){
        Insertatstart(head,x);
        return ;
    }
else{
    Node *temp=head;
    int cnt=1;
    while(cnt < pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtEnd(tail,x);
    }
    newnode->next=temp->next;
    temp->next =newnode;
}
}


void deletenode(Node * head , int pos){
    if(pos==1){
        Node * temp=head;
        head=head->next;
        temp->next=NULL;
        delete (temp);
    }
    else{
        Node *prev=NULL ,*curr=head;
        int cnt=1;
        while(cnt<pos){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev-> next=curr->next;
        curr->next=NULL;
        delete(curr);
    }
}


int main()
{
    Node *newnode = new Node(1);
    Node *head = newnode;
    Node *tail=newnode;
    cout<<newnode->data<<endl;
    cout<<newnode->next<<endl;

  Insertatstart(head,2);
  print(head);
 cout<<endl;
 Insertatstart(head,3);
 print(head);
 cout<<endl;

 insertAtEnd(tail,4);
 print(head); 
 cout<<endl;

 insertAtEnd(tail,5); 
 print(head); 
 cout<<endl;

 Insertatmiddle(head,tail, 3,6);
print(head);
    return 0;
}



