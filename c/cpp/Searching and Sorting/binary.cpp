#include<iostream>
using namespace std;
int BinarySearch(int arr[],int L,int val,int R)
{

    while (R>=L){
    int M= L + (R-L)/2;
    if (arr[M]==val)
    {
      
        return M ;
    }
    else if (arr[M]>val)
    {
        return BinarySearch(arr,L,val,M-1);
    }
    else 
    {
        return BinarySearch(arr,M+1,val,R);
    }
    }
    return -1;
}
int main()
{
    int arr[]={ 1, 2, 7, 8, 10};
    int R=sizeof(arr)/sizeof(arr[0]);
    int L=0;
    int val;
    cout<<"Enter the number you want to search\n";
    cin>>val;
    int position=BinarySearch(arr,L,val,R);
    if (position==-1)
    {
        cout<<"Not found!!";
    }
    else 
    {
        cout<<"Element found at "<<position+1<<"th position";
    }
    return 0;
}