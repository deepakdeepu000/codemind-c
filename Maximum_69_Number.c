#include<stdio.h>
int main()
{
    int i,j,k,c=0,m=0,l,d=0;
    scanf("%d",&i);
    while(i!=0)
    {
        j=i%10;
        i=i/10;
        c=c*10+j;
    }
    while(c!=0)
    {
        k=c%10;
        c=c/10;
        if(d==0)
        {
            if(k==6)
            {
                k=9;
                d+=1;
            }
        }
        m=m*10+k;
    }
    printf("%d",m);
}