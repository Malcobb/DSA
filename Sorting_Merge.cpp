#include <iostream>
using namespace std;
void print(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }
    cout << endl;
};
void merge(int a[], int mid, int low, int high)
{
    int i, j, k, b[60];
    i = low;
    j = mid + 1;
    k = low;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            k++;
            i++;
        }
        else 
        {
            b[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
};
void mergesort(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merge(a, mid, low, high);
    }
};
int main()
{
    int a[] = {9, 37,12, 42, 23, 6};
    int n = 6;
    print(a, n);
    mergesort(a, 0, n -1);
    print(a, n);
    return 0;
}