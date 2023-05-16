#include<iostream>
#include<stdlib.h>
using namespace std;
class queue
{
public:
int size;
int f;
int r;
int *arr;    
};

int isempty(queue *q)
{
    if (q->f==q->r)
    {
        return 1;
    }
    else
    {
    return 0;
    }
};
int isfull(queue *q)
{
    if((q->r+1)%q->size==q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};
int enqueue(queue *q,int val)
{
    if (isfull(q))
    {
        cout<<"Queue is Full"<<endl;
    }
    else
    {
        q->r=(q->r+1)%q->size;
        val=q->arr[q->r];
    }  
    return val;
};
int dequeue(queue *q)
{
    int a=-1;
    if (isempty(q))
    {
        cout<<"Queue Empty"<<endl;
    }
    else
    {
        q->f=(q->f+1)%q->size;
        a=q->arr[q->f];
    }
    return a;   
};
int main()
{
    class queue *q=new queue;
    q->size=10;
    q->f=q->r=0;
    q->arr=new int;
    enqueue(q,6);
    enqueue(q,5);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    cout<<isfull(q);
    cout<<isempty(q);

 


    
    return 0;
}
