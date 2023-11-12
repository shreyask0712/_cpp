/*#include<iostream>
using namespace std;
void fun( int &b)
{
    b=40;
    cout<<b;
}
int main()
{
    int a=30;
    fun(a);
    cout<<"\n"<<a;
    return 0;
}*/


// PROGRAM 1 (Fails in compilation)
#include<iostream>
using namespace std;

void fun(const int i)
{
	cout << "fun(const int) called ";
}
void fun(int i)
{
	cout << "fun(int ) called " ;
}
int main()
{
	int const fun f1(10);
    f1.fun();
	return 0;
}

