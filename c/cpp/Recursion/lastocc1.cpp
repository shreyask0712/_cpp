#include<iostream>
using namespace std;
int lastocc(int input[],int size,int currInd, int val)
{
    if (size==currInd)
    {
        return -1;
    }
    int index = lastocc(input, size, currInd+1, val);
    if (index==-1 &&input[currInd]==val)
    {
        return currInd;
    }
    else 
    {
        return index;
    }
    
}
int main ()
{
    int input[]={9,8,10,8,0};int size=5; int val=8;
   
    cout<<"\n"<<lastocc(input,5,0,8)+1;
    
    return 0;
}