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
void selectionsort(int *a,int n)
{
    cout<<"Selection Sort Initiated....."<<endl;
    int indexmin,temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {   indexmin=i;

            if(a[indexmin]>a[j])
            {
                indexmin=j;
            }

        }
        temp=a[i];
        a[i]=a[indexmin];
        a[indexmin]=temp;
        
    }
    
};
int main()
{
    int a[]={20,13,72,43,56,10};
    int n=6;
    print(a,n);
    selectionsort(a,n);
    print(a,n);
    return 0;
}