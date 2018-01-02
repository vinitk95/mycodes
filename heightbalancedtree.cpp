#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
Node *newNode(int val)
{
    Node *newnode=new Node;
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

int height(Node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);

    return max(lh,rh)+1;
}
bool checkforheightbalanced(Node *root)
{
    int lh;
    int rh;

    if(root==NULL)
    {
        return true;
    }
    lh=height(root->left);
    rh=height(root->right);
    if(abs(lh-rh<2 && checkforheightbalanced(root->left)&& checkforheightbalanced(root->right)))
    {
        return true;
    }
    return false;
}
void preorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);


}
int main()
{
        Node *root=newNode(3);
        root->left=newNode(4);
        root->right=newNode(5);
        preorder(root);
        cout<<endl;
        cout<<checkforheightbalanced(root);
        return 0;
}
