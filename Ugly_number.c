#include<stdio.h>
int prime(int a)
{
    int i,j,c=0,ans;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            c+=1;
        }
    }
    if(c==2)
    {
        ans=1;
    }
    else
    {
        ans=0;
    }
    return ans;
}
int main()
{
    int i,j,k=0;
    scanf("%d",&i);
    if(i<0)
    {
        printf("Not Ugly Number");
    }
    else
    {
    for(j=1;j<=i;j++)
    {
        if(i%j==0)
        {
            if(prime(j)==1)
            {
                if(j!=2 && j!=3 && j!=5)
                {
                    k+=1;
                    printf("Not Ugly Number");
                    break;
                }
            }
        }
    }
    if(k==0)
    {
        printf("Ugly Number");
    }
    }
}