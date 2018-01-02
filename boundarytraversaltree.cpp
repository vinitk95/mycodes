#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

};
Node * push(int data)
{
    Node *newnode=new Node();
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
void inorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void printleft(Node *root)
{
    if(root==NULL || (root->left==NULL && root->right==NULL))
    {
        return;
    }
    cout<<root->data<<" ";
    printleft(root->left);

}
void printleaf(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left==NULL && root->right==NULL)
    {
        cout<<root->data<<" ";
    }
    printleaf(root->left);
    printleaf(root->right);

}
void printright(Node *root)
{
    if(root==NULL || (root->left==NULL && root->right==NULL))
    {
        return;
    }
    printright(root->right);
    cout<<root->data<<" ";
}
void boundary(Node *root)
{
    if(root==NULL)
    {
        return ;
    }
    printleft(root);
    printleaf(root);
    printright(root->right);
}
void morristraversal(Node *root)
{
    while(root)
    {

        if(root->left==NULL)
        {
            cout<<root->data<<" ";
            root=root->right;

        }
        else
        {
         Node *current=root->left;
        while(current->right!=root && current->right)
        {
            current=current->right;
        }

        if(current->right==root)
        {
            current->right=NULL;
            root=root->right;
        }
        else{
            cout<<root->data<<" ";
            current->right=root;
            root=root->left;
        }
        }
    }
}
int main()
{
    Node *root=push(1);
    root->left=push(2);
    root->right=push(3);
    root->left->left=push(4);
    root->left->right=push(5);
    root->right->left=push(6);
    root->right->right=push(7);
    inorder(root);
    cout<<"\nThe morris traversal of the tree is :";
    morristraversal(root);
   // cout<<"\nThe boundary level traversal of the tree is :";
    //boundary(root);
    return 0;
}
