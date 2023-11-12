#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bubblesort(int *arr[], int size)
{
    while (size>0)
    {
        for (i=0;i<size;i++)
        {
            if (arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        size=size-1;
        }
    }
}
int main()
{
    int arr[],i,size,n;
    cout<<"Enter the size of the array\n";
    cin>>size;
    for (i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    n=size;    
    bubblesort(arr,size);
     cout<<"After bubblesort:\n";
     for (i=0;i<n;i++)
     {
        cout<<arr[i]<<" ";
     }
}
