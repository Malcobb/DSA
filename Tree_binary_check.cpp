#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{public:
int data;
node *left;
node *right;
};
int isBST(node *root)
{ static node *prev=new node();
    if(root!=NULL)
    {
        if(!isBST(root->left))
        return 0;        
    
    if(prev!=NULL && root->data<=prev->data)
    {
        return 0;
    }
    
    prev=root;
    return isBST(root->right);
    }
   else
   {
    return 1;
   }
}
node *create(int val)
{
    node *n=new node();
    n->data=val;
    n->left=NULL;
    n->right=NULL;
};
node *inorder(node *p)
{
    if (p!=NULL)
    {
        inorder(p->left);
        cout<<p->data;
        inorder(p->right);
    }
    
};
//    5
//    /\
//   3  6
//  /\  
// 1  4
int main()
{
    node *p0=create(5);
    node *p1=create(3);
    node *p2=create(6);
    node *p3=create(1);
    node *p4=create(4);
    p0->left=p1;
    p0->right=p2;
    p1->left=p3;
    p1->right=p4;
    inorder(p0);
    cout<<"\n";
    if(isBST(p0))
    {
        cout<<"Yes sir";
    }
    else
    cout<<"Nah Man";
    return 0;    
}