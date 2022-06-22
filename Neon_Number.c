#include<stdio.h>
int main()
{
    int a,b,c,d=0,e=0;
    scanf("%d",&a);
    e=a;
    b=a*a;
    while(b!=0)
    {
        c=b%10;
        b=b/10;
        d+=c;
    }
    if (d==e)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    
}