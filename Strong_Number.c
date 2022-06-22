#include<stdio.h>
int main()
{
    int a, b, i, c=1, d=0, e;
    scanf("%d", &a);
    e=a;
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        for(i=b; i>0; i--)
        {
            c*=i;
        }
        d+=c;
        c=1;
    }
    if(d==e)
    {
        printf("The number %d is a strong number", e);
    }
    else
    {
        printf("The number %d is not a strong number", e);
    }
    return 0;
}