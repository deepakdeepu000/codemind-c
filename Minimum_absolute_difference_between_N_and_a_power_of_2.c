#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=0,x,f,s,fir,sec;
    while(1)
    {
        x=pow(2,i);
        if(x<=n)
        {
            f=x;
        }
        if(x>n)
        {
            s=x;
            break;
        }
        i+=1;
    }
    fir=abs(n-f);
    sec=abs(n-s);
    if(fir<=sec)
    {
        printf("%d",fir);
    }
    else
    {
        printf("%d",sec);
    }
}