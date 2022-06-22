#include<stdio.h>
int prime(int a)
{
    int i,c=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            c+=1;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int i,j,k,l,m=0,a[100],c=0;
    scanf("%d",&j);
    for(i=1;i<=j;i++)
    {
        if(j%i==0)
        {
            if(prime(i))
            {
                c+=1;
                a[m++]=i;
                if(c==2)
                {
                    break;
                }
            }
        }
    }
    if(c<=1)
    {
        printf("-1");
    }
    else
    {
        for(m=0;m<c;m++)
        {
            printf("%d ",a[m]);
        }
    }
}