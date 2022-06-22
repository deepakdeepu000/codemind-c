#include<stdio.h>
int main()
{
    int n1,n2,a,b=0,c,d,e=0,f,g=0,k=0,res,count=0;
    scanf("%d%d",&n1,&n2);
    while(n1!=0)
    {
        count+=1;
        a=n1%10;
        n1=n1/10;
        b=b*10+a;
        if (count==n2)
        {
            d=b;
        }
    }
    while(d!=0)
    {
        c=d%10;
        d=d/10;
        e=e*10+c;
    }
    while(b!=0)
    {
        k+=1;
        f=b%10;
        b=b/10;
        g=g*10+f;
        if(k==n2)
            {
                break;
            }
    }    
        res=e-g;
    if(res<0)
    {
        printf("%d",res*(-1));
    }
    else
    {
        printf("%d",res);
    }
        
}