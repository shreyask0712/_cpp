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
    int array[]={10,7,9,8,3,2,1,930,829202,2292910,39223};
    int size=sizeof(array)/sizeof(array[0]);
    display(array,size);
    for (int i=1;i<size;i++)
    {
        int target=array[i];
        int j=i-1;
        while(j>=0 && array[j]>target)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=target;
        
    }
    display(array,size);
    return 0;
}