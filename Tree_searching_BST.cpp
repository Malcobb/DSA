#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{public:
int data;
node *left;
node *right;
};
node *create(int val)
{
    node *n=new node();
    n->data=val;
    n->left=NULL;
    n->right=NULL;
};
node *search(node *root,int val)
{   if(root==NULL)
    {
        return NULL;
    }
    if (root->data==val)
    {
    return root;
    }
    else if (root->data<val)
    {
       return search(root->right,val);
    }
    else
    return search(root->left,val);
        
}
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
    node *n=new node();
    n=search(p0,3);
    if(n!=NULL)
    {
        cout<<"Found";
    }
    else
    cout<<"Not Found";
    return 0;    
}