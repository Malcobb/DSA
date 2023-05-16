#include<iostream>
#include<limits.h>
#include<stdlib.h>
using namespace std;

void print(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }
    cout << endl;
};

int maximum(int a[],int n)
{
    int max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(max<a[i])
        max=a[i];
    }
    return max;
};
void countsort(int *a,int n)
{
    int i,j;
    int max=maximum(a,n);
    int *count=new int;
    for (int i = 0; i < max+1; i++)
    {
        count[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
        count[a[i]]=count[a[i]]+1;
    }
    i=0;
    j=0;

    while (i<=max)
    {
        if(count[i]>0)
        {
            a[j]=i;
            count[i]=count[i]-1;
            j++;
        }
        else
        i++;
    }
    
    

};

int main()
{
    int a[]={3,6,2,8,1,9,0,4,7,5};
    int n=10;
    print(a,n);
    countsort(a,n);
    print(a,n);
    return 0;
}