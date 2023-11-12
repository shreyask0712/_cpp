//power using recursion
#include<iostream>
using namespace std;
double pow(int a,int b)
{
    double p;
    if (b!=0)
    {
        return p=a*pow(a,b-1);
    }
    else
    return 1;
    
};
int main()
{
    int a,b;
    double result;
    cout<<"Enter the number ";
    cin>>a;
    cout<<"Enter the power of the number ";
    cin>>b;
    result=pow(a,b);
    cout<<"\n"<<result;
}
