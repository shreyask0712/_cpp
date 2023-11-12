#include<iostream>
using namespace std;
void printarray(int array[],int size, int i){
   
   if (i==size){
    return;
   }
    
    printarray(array,size,++i);
    cout<<array[i]<<" ";
}
    

int main()
{
    int array[]={1,2,3,4,5};
    printarray(array,5,0);
    return 0;
}