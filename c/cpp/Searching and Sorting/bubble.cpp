#include<iostream>
using namespace std;
void display(int arr[],int size)
{
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void bubble(int array[], int size)
{
    for (int i=0;i<size-1;i++)
    {
        for (int j=0;j<size-i-1;j++)
        {
            if (array[j]>array[j+1])
            swap(&array[j+1],&array[j]);
        }
    }
}

int main()
{
    int array[]={10,7,9,8,3,2,1,930,829202,2292910,39223};
    int size=sizeof(array)/sizeof(array[0]);
    display(array,size);
    bubble(array,size);
    display(array,size);
    return 0;
}