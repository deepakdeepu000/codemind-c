#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    int fib[i],j,k;
    fib[0]=0;
    fib[1]=1;
    for(j=2;j<i;j++)
    {
        fib[j]=fib[j-2]+fib[j-1];
    }
    for(j=0;j<i;j++)
    {
        printf("%d ",fib[j]);
    }
}