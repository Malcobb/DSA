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
    if(q->r==q->size-1)
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
        cout<<"Queue is Full";
    }
    else
    {
        q->r++;
        val=q->arr[q->r];
    }

    
    
}
int main()
{
    class queue *q=new queue;
    q->size=10;
    q->f=q->r=-1;
    q->arr=new int;
    cout<<isfull(q);
    cout<<isempty(q);




    
    return 0;
}
