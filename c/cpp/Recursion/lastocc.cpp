#include<bits/stdc++.h>

using namespace std;

int firstIndex(int input[], int size, int x, int currIndex){
    if(size==currIndex){
        return -1;
    }

    int index = firstIndex(input,size,x,currIndex+1);
    
    if (index==-1 && input[currIndex]==x)
    {
        return currIndex;
    }
    else 
    {
        return index;
    }
    
}

int main(){
    int input[] = {9,8,10,0,8};
    int x = 8;
    int size = 5;

    cout<<firstIndex(input,size,x,0)+1;

    return 0;
}