#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
    public:
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
}
node *postorder(node *p)
{
    if (p!=NULL)
    {
        postorder(p->left);
        postorder(p->right);
        cout<<p->data;
    }
    
};
//       2      left>right>root
//      /\
//     4  6
//    /\
//   8  10
int main()
{
    node *p0=create(2);
    node *p1=create(4);
    node *p2=create(6);
    node *p3=create(8);
    node *p4=create(10);
    p0->left=p1;
    p0->right=p2;
    p1->left=p3;
    p1->right=p4;
    postorder(p0);
    return 0;
    
}