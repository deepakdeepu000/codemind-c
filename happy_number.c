#include<stdio.h>
int hp(int n)
{
    int i,j,c=0;
    while(n!=0)
    {
        i=n%10;
        n=n/10;
        c+=(i*i);
    }
    return c;
}
int main()
{
    int n,a;
    scanf("%d",&n);
    while(n>=10)
    {
        a=hp(n);
        n=a;
    }
    if(a==1 || a==7)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}