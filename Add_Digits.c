#include<stdio.h>
int main()
{
    int a,b,c,d,e,count=0,pro=0,f=0,g=0,h,i,j;
    scanf("%d", &a);
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        count+=b;
    }
    if(count>10)
    {
        while(count!=0)
        {
        c=count%10;
        count=count/10;
        pro+=c;
        }
        if(pro<10)
        {
            printf("%d", pro);
        }
        else
        {
            while(pro!=0)
            {
                d=pro%10;
                pro=pro/10;
                f+=d;
            }
            if(f<10)
            {
                printf("%d", f);
            }
        }
    }
    else
    {
        printf("%d", count);
    }
    return 0;
}