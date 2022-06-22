#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int a[size], i, c, d, e=0;
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<size; i++)
    {
        d=a[i];
        while(d!=0)
        {
            c=d%10;
            d=d/10;
            e=e*10+c;
        }
        if(e==a[i])
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        e=0;
    }
    return 0;
}