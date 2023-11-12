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

int main()
{
    int array[]={9,8,10,5,4,2,1,7,6,3};
    int size=sizeof(array)/sizeof(array[0]);
    display(array,size);
   int i,j,temp,min_index;
   for (i=0;i<size;i++)
   {
    min_index=i;
    for (j=i+1;j<size;j++)
    {
        if (array[j]<array[min_index])
        {
            min_index=j;
        }
    }
    temp=array[i];
    array[i]=array[min_index];
    array[min_index]=temp;
   }  
   display(array,size);
}