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
    int num;
    cout<<"Enter the Element to be searched"<<endl;
    cin>>num;
    for (int a = 0; a < 3; a++)
    {   
        for (int b = 0; b < 3; b++)
        {   
            if(arr[a][b]==num)
            {cout<<"Element "<<num<<"Found At Index ["<<a+1<<","<<b+1<<"]";}          
        } 
    }
    return 0;    
}