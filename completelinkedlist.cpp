#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;

};
struct Node *head=NULL;
void insertval(int val)
{
    Node *newnode=new Node();
    newnode->data=val;
    newnode->next=head;
    head=newnode;
}
void display(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
void deletenode(Node *&ptr,int val)
{
    Node *cur=ptr;
    Node *pre=NULL;
    while(cur->data!=val)
    {
        pre=cur;
        cur=cur->next;
    }
    pre->next=cur->next;
}

int  deletemiddle(Node *&ptr)
{
    Node *slow=ptr;
    Node *fast=ptr;
    Node *temp=NULL;
    while(fast!=NULL && fast->next!=NULL)
    {
        temp=slow;
        slow=slow->next;
        fast=fast->next->next;

    }
    temp->next=slow->next;
    delete(slow);
}
void middleNodehead(Node *&head)
{
    Node *fast=head;
    Node *slow=head;
    Node *pre;
    while(fast!=NULL && fast->next!=NULL)
    {
        pre=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    fast->next=head;
    pre->next=NULL;
    head=slow;
}
Node* reverselist(Node *&head)
{

    Node *next=NULL;
    Node *pre=NULL;
    Node *curr=head;
    int count=0;
    while(curr!=NULL && count<2)
    {
        next=curr->next;
        curr->next=pre;
        pre=curr;
        curr=next;
        count++;
    }
    if(next!=NULL)
    {
    head->next=reverselist(next);
    }
  return pre;
}

int main()
{
    insertval(2);
    insertval(3);
    insertval(5);
    insertval(6);
    insertval(4);
    display(head);
    cout<<"\nThe linked list after deletion is :";
    deletenode(head,4);
    cout<<"\nDeleting the middle Node:";
    deletemiddle(head);
    cout<<"\n\nAfter making middle node in the linked list:";
    middleNodehead(head);
    display(head);
    cout<<"\nLinked list after reversal is :";
    everselist(head);

    display(head);
    return 0;
}
