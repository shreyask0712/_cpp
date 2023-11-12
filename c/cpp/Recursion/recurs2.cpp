#include<iostream>
using namespace std;
int fib(int n)
{
    if (n<=1)
    {
        return n;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
};
int main()
{   int n,i=0;
    cout<<"Write the number upto which fibonacci series has to be displayed\n";
    cin>>n;
    while(i<n)
    {
        cout<<fib(i)<<" ";
        i++;
    }    
}