#include<stdio.h>
int main()
{
    int a,b,c,d,e,count=0,pro=0,f=0,g=0,h,i,j;
    scanf("%d %d", &a,&b);
    for(c=a;c<=b;c++)
    {
        for(d=1;d<=c;d++)
        {
            if(c%d==0)
            {
                count+=1;
            }
        }
        if(count==2)
        {
            printf("%d
", c);
        }
        count=0;
    }
    return 0;
}