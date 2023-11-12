#include<iostream>
#include<string.h>
using namespace std;
bool isPalrec(char arr[],int s,int e)
{   
    if (s==e)
    
        return true;
    
    if (arr[s]!=arr[e])
    
        return false;
    
    if (s<e+1)
    return isPalrec(arr,s+1,e-1);
}
bool isPalindrome(char arr[])
{
    int n;
    n=strlen(arr);
    if (n==0)
    
        return true;
    
    isPalrec(arr,0,n-1);
}
int main()
{   char arr[]="madap";
    if (isPalindrome(arr))
    cout<<"String is a palindrome";
    else 
    cout<<"String isn't a palindrome";
    return 0;
}