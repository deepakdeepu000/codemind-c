#include<stdio.h>
#include<math.h>
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
    int n,a,i,k;
    scanf("%d %d",&n,&a);
    i=n+a;
    for(k=1;k!=0;k++)
    {
        if(prime(k+i))
        {
            printf("%d",k);
            break;
        }
    }
}