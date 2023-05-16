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
int partion(int a[],int low,int high)
{   int pivot=a[low];
    int i=low+1;
    int j=high;
    int temp;
    do
    {
        while (a[i]<=pivot)
        i++;
        while(a[j]>pivot)
        j--; 
        if (i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }

    }while (i<j);
    temp =a[low];
    a[low]=a[j];
    a[j]=temp;
    return j;
        
};
void quicksort(int a[],int low,int high)
{
    int partindex;
    if (low<high)
    {  
       partindex=partion(a,low,high);  
       quicksort(a,low,partindex-1);
       quicksort(a,partindex+1,high);
    }    
};
int main()
{
    int a[]={20,13,72,43,56,10};
    int n=6;
    print(a,n);
    quicksort(a,0,n-1);
    print(a,n);
    return 0;
}