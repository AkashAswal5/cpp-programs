#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void InsertAtStart(Node *&head, int x) { //insertion at begening 
    Node *newnode = new Node(x);
    newnode->next = head;
    head = newnode;
}

void InsertAtEnd(Node *tail ,int x){//insertion at end 
    Node *newnode =new Node(x);
    tail ->next  =newnode;
    tail =newnode;
}
void  InsertAtRandom(Node *head ,Node *tail ,int Random ,int x){
    Node *newnode =new Node(x);
    if (Random == 1)
    {
        InsertAtStart(head ,x);
        
    }
    else
    {
        Node *temp = head;
        int cnt = 1;
        while(cnt < Random-1)
        {
            temp = temp-> next;
            cnt ++;
            
        }
        if(temp->next ==NULL){
            InsertAtEnd(tail,x);
            
        }
        newnode->next =temp->next;
        temp->next =newnode;
    }

}

void Delnode(Node *head,int Random){
    if(Random==1){
        Node *temp = head;
        head = head->next;
        temp->next=NULL;
        delete(temp);
        
    }
    else
    {
       Node *perv =NULL,*curr =head;int cnt =1;
       while(cnt<Random)
       {
           prev = curr;
           curr =curr->next;
           cnt++;
           
       }
       prev->next =curr->next;
       curr->next =NULL;
       delete(curr);
    }
}

void print(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data ;
        temp = temp->next;
    }
  
}

int main() {
    Node *newnode = new Node(1);
    Node *head = newnode;
    cout << newnode->data<<endl  ;
    cout << newnode->next<< endl  ;
    Node *tail  = newnode;
    InsertAtStart(head, 2);
    print(head);
    cout<<endl;
    InsertAtStart(head ,3);
    print(head);
    cout<<endl;
    InsertAtEnd(tail,4);
    print(head);
    cout<<endl;
    InsertAtEnd(tail,5);
    print(head);
    cout<<endl;
    InsertAtRandom(head,tail,3,6);
    print(head);
    Delnode(head ,6);
    print(head);
    return 0;
}
