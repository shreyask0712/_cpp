#include<iostream>
using namespace std;
int check(char arr[],int size,int currindex)
{   int flag=1;
    {
        if (currindex==size)
    {
        return 0;
    } 
    int index  = check(arr, size, currindex+1);
    
    for (index=0;index<size;index++)
    {
        if (arr[index]==arr[currindex])
        {
            flag++;
        }
    --currindex;d
    }
    }
    if (flag==size)
    {
        cout<<"String is a palindrome";
    }
    else 
    {
        cout<<"String is not a palindrome";   
    }
}
int main()
{   char arr[6]="madam";
    is Palindrome(arr);
    
    return 0;
}