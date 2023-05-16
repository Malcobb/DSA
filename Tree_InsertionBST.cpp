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
node *insert(node *root,int val)
{  node* prev=new node();
    prev=NULL;
    while (root!=NULL)
    {prev = root;    
    if (root->data==val)
    {   cout<<"Cant Insert";
        return root;
    }
    else if (root->data<val)
    {
       root=root->right;
    }
    else
    root=root->left;
    }
    node *m=new node();
    m=create(val); 
    if(val<prev->data) 
    prev->left=m;
    else
    prev->right=m;    
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
    insert(p0,7);
    cout<<p0->right->right->data;
   
    return 0;    
}