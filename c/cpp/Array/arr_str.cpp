#include<iostream>
using namespace std;
char* myFunc(char* str)
{
    int i = 0;
    while (*(str+i)!='\0')
    {
         if (str[i]=='a')
        str[i]='z';
        i++;
    }
    return str;

}
int main()
{
    char str[]= "Malayalam";
    char* p ;
    p=myFunc(str);
    cout<<p;

}