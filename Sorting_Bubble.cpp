#include<iostream>
using namespace std;

void print(int *a,int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<a[i];
    }
    cout<<endl;
        
};
int sorting(int *a,int n)
{
    int temp;
    int issorted=0;
    for (int j = 0; j < n-1; j++)
    {   cout<<"Pass Number:- "<<j<<endl;
        issorted=0;
        for (int k = 0; k < n-1-j; k++)
        {
            if(a[k]>a[k+1])
            {
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
                issorted=1;
            }
            
        }
        
    }
    if(issorted)
    return issorted;
};
int main()
{
    int a[]={12,4,35,67,3,30};
    int n=6;
    print(a,n);
    sorting(a,n);
    print(a,n);
    return 0;
}