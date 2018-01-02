#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void insert(int val)
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
void reverse(Node *&head)
{
    Node *next;
    Node *pre=NULL;
    Node *current=head;
    while(current!=NULL)
    {
        next=current->next;
        current->next=pre;
        pre=current;
        current=next;
    }
    head=pre;
}
int secondlast(Node *head)
{
    Node *pre=head;
    Node *current=head->next->next;
    while(current->next!=NULL)
    {
        pre=pre->next;
        current=current->next;
    }
    int val=pre->data;
    return val;
}
void swappair(Node *&head)
{
    // If linked list is empty or there is only one node in list
    if (head == NULL || (head)->next == NULL)
        return;

    // Initialize previous and current pointers
     Node *prev = head;
     Node *curr = (head)->next;

    head = curr;  // Change head before proceeeding

    // Traverse the list
    while (true)
    {
         Node *next = curr->next;
        curr->next = prev; // Change next of current as previous node

        // If next NULL or next is the last node
        if (next == NULL || next->next == NULL)
        {
            prev->next = next;
            break;
        }

        // Change next of previous to next next
        prev->next = next->next;

        // Update previous and curr
        prev = next;
        curr = prev->next;
    }
}
int main()
{
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    insert(9);
    cout<<"The original linked list is:";
    display(head);
    cout<<"\nThe liked list after reversal is :";
    reverse(head);
    display(head);
    cout<<"\nFinding second last node of liked list:"<<secondlast(head);
    cout<<"\nswapping linked list pairwise:";
    swappair(head);
    display(head);
    return 0;
}
