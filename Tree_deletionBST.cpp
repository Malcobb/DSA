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
node * inorder_predecessor(node * Root)
{
    Root = Root -> left;
    while(Root -> right != NULL)
    {
       Root = Root -> right;
    }
    return Root;
}
node * deletion(node * Root, int Value)
{
    node * Ipre=new node();
    // Case 1: For Leaf Node //
    if(Root == NULL)
    {
        return NULL;
    }

    if(Root -> left == NULL && Root -> right == NULL)
    {
        free(Root);
       return NULL;
    }

    // Case 2: Deleting the Root Node or Non-Leaf Node //
    // Seraching the Node //
    if(Value < Root -> data)
    {
        Root -> left = deletion(Root -> left, Value);
    }

    else if(Value > Root -> data)
    {
        Root -> right = deletion(Root -> right, Value);
    }

    // Starting the Deletion Process //
    // Value == Root -> Data //
    else
    {
        Ipre = inorder_predecessor(Root);
        Root -> data = Ipre -> data;
        Root -> left = deletion(Root -> left, Ipre -> data);

    }

    return Root;

}
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
    deletion(p0, 5);
    printf("\n");
    inorder(p0);
    
   
    return 0;    
}