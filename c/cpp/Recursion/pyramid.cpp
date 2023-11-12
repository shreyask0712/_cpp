#include<iostream>
using namespace std;
int main()
{
    int n,k,space;
    cin>>n;
    for (int i=1,k=0;i<=n;++i,k=0)
    {
        for (space=0;space<=n-i;++space)
        {
            cout<<"  ";
        }
        while (k!= 2 * i -1)
        {
            cout<<"* ";
            ++k;
        }
    cout<<"\n";
    }
    return 0;
}
