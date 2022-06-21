#include<stdio.h>
int pr(int i)
{
    int j,c=0,k,l,count=0,n=0;
    k=i;
    while(i!=0)
    {
        j=i%10;
        i=i/10;
        c=c*10+j;
    }
    if(c==k)
    {
        for(l=1;l<=c;l++)
        {
            if(c%l==0)
            {
                count+=1;
            }
        }
        if(count==2)
        {
            printf("%d",c);
            n+=1;
        }
    }
    return n;
}
int main()
{
    int i,j,k;
    scanf("%d",&i);
    for(j=i+1;j>0;j++)
    {
        k=pr(j);
        if(k==1)
        {
            break;
        }
    }
}