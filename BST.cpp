#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *insertval(Node *&root,int val)
{
    if(root==NULL)
    {
        root->data=val;
        root->left=NULL;
        root->right=NULL;
    }
    if(root->data<val)
    {
        insertval(root->right,val);
    }
    else
        if(root->data>val)
    {
        insertval(root->left,val);
    }
    return root;
}
void preorder(Node *root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    Node *root=new Node();
    insertval(root,2);
    insertval(root,3);
    insertval(root,4);
    preorder(root);

    return 0;
}

