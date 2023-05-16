#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{   
    public:
    int data;
    node *next;
};

node *f= NULL;
node *r= NULL;

int isempty()
{
    if(f==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};
void enqueue(int data)
{   node *ptr=new node();
    if (ptr==NULL)
    {
        cout<<"Is Full";
    }
    else
    {
        ptr->data=data;
        ptr->next=NULL;  
        if(f==NULL)
        {
            f=r=ptr;
        }  
        else
        {
            r->next= ptr;
            r=ptr;
        }
    }
};
int dequeue()
{
    int val=-1;
    node *ptr=new node();
    if(isempty())
    {
        cout<<"Queue is Empty";
    }
    else
    {
    f=f->next;
    val=ptr->data;
    free(ptr);
    }
    return val;
};
void trav(node *m)
{
    cout<<"Element in linked list\n";
    while(m!=NULL)
    {
        cout<<"Elements are "<<m->data<<endl;
        m=m->next;
    }
};

int main()
{
    enqueue(20);
    enqueue(34);
    enqueue(90);
    enqueue(63);
    enqueue(51);
    enqueue(47);
    dequeue();
    dequeue();
    trav(f);
    return 0;


}