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
void insertionsort(int *A,int n)
{
    int key=0,j=0;
    for (int i = 1; i <= n-1; i++)
    {   
        key =A[i];
        j=i-1;
        while (j>=0 && A[j]>key)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
    
};
int main()
{
    int a[]={23,12,15,47,8};
    int n=5;
    insertionsort(a,n);
    print(a,n);
    return 0;
}