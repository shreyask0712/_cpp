#include<stdio.h>
int main()
{
    int arr[]={10,20,30,45,67,56,74};
    int i=4,*j,*k,*x,*y;
    j=&i;
    printf("%d\n",j);
    j=j+9;
     printf("%d\n",j);
    k=&i;
     printf("%d\n",k);
    k=k-3;
     printf("%d\n",k);
    x=&arr[1];
    y=&arr[5];
    printf("%d\n",y-x);
    j=&arr[4];
     printf("%d\n",j);
    k=(arr + 4);
     printf("%d\n",k);
    if (j==k)
    printf("The two numbers point to the same location\n");
    else 
    printf("The two pointers do not point to the same location\n");
    return 0;
}