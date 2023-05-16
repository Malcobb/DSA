#include<iostream>
#include<stdlib.h>
using namespace std;
class queue
{
    public:
    int size;
    int val;
    int f;
    int r;
    int *arr;
};
int isempty(queue *a)
{
    if (a->r==a->f)
    {
        return 1;
    }
    return 0;
    
};
int isfull(queue *a)
{
    if (a->r==a->size-1)
    {
        return 1;
    }
    return 0;
    
};
int dequeue(queue *a)
{
    int b=-1;
    if (isempty(a))
    {
        cout<<"Queue Empty";
    }
    else
    {
        a->f++;
        b=a->arr[a->f];
    }
    return b;   
};
void enqueue(queue *a,int val)
{
    if (isfull(a))
    {
        cout<<"Queue overload";
    }
    else
    {a->r++;
    a->arr[a->r]=val;
    }    
};
int main()
{
    queue *q=new queue();
    q->r=q->f=0;
    q->size=400;
    q->arr=new int;
    int node;
    int i=0;
    int visited[7]={0,0,0,0,0,0,0};
    int x[7][7]=
    {
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0},
    };
    cout<<i;
    visited[i]=0;
    enqueue(q,i);
    while(!isempty(q))
    {
        int node=dequeue(q);
        for (int j = 0; j < 7; j++)
        {
            if(x[node][j]==1 && visited[j]==0)
            {
                cout<<j;
                visited[j]=1;
                enqueue(q,j);
            }
        }
        
    }
return 0;
}