#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int arr[5];
    int target;
    cout<<"Enter the Target:-";
    cin>>target;
    cout<<"Enter the Numbers:-";
    for(int i=0;i<5;i++)
    {
    cin>>arr[i];
    }
    for(int j=0;j<5;j++)
    {
     for(int k=1;k<5;k++)
     {
        if (arr[j]+arr[k]==target)
        {
            cout<<"["<<j<<";"<<k<<"]";
        }
        
     }
    }
    return 0;
}