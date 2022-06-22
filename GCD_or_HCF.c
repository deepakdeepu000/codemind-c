#include<stdio.h>
void gcd_or_hcf(int a, int b)
{
    int t,c;
    if(a<b)
    {
        t=a;
        a=b;
        b=t;
    }
    c=a;
    while(a)
    {
        if(a%c==0 && b%c==0)
        {
            printf("%d",c);
            break;
        }
        c-=1;
    }
    
}
int main()
{
    int a , b;
    scanf("%d %d",&a,&b);
    gcd_or_hcf(a,b);
}