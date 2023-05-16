#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {   cout<<"Element in array at ["<<i+1<<"] ["<<j+1<<"]";
            cin>>arr[i][j];
        }  
    }
    for (int k = 0; k < 3; k++)
    {   
        for (int x = 0; x < 3; x++)
        {   
            cout<<arr[k][x];            
        } 
        cout<<endl; 
    }
    return 0;    
}