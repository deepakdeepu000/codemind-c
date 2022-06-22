#include<stdio.h>
void fibonacci_n(int *fib, int n)
{
    int i,k,c=0;
    for(i=0;i<20;i++)
    {
        if(fib[i]==n)
        {
            c+=1;
            break;
        }
    }
    if(c>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
int main()
{
    int n,i,fib[100];
    scanf("%d",&n);
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<20;i++)
    {
        fib[i]=fib[i-2]+fib[i-1];
    }
    fibonacci_n(fib,n);
}