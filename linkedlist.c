#include<stdio.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void insert(int val)
{
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=val;
    newnode->next=head;
    head=newnode;
}
void print(struct Node *ptr)
{

    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    insert(2);
    insert(3);
    insert(4);
    print(head);
    return 0;
}
