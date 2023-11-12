#include<iostream>
using namespace std;
void display(int array[],int size){
    for (int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<"\n";
}
void swap (int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int indexPI(int array[], int low, int high){
    int pivot=array[high];
    int swapindex=(low-1);
    for (int j=low;j<=high-1;j++){
        if (array[j]<pivot){
            swapindex++;
            swap(&array[swapindex],&array[j]);
        }
    }
    swap(&array[swapindex + 1],&array[high]);
    return (swapindex + 1);
}
void quicksort(int array[],int low, int high){
    if (low<high){
        int partitionindex=indexPI(array,low,high);
        quicksort(array,low,partitionindex-1);
        quicksort(array,partitionindex+1,high);
    }
}

int main()
{
    int array[]={70,90,10,30,50,20,60};
    int size=sizeof(array)/sizeof(array[0]);
    display(array,size);
    quicksort(array,0,size-1);
    display(array,size);
    return 0;
}