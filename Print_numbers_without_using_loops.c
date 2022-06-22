#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    if(a>=1 && a<=10000)
    {
    for(b=1; b<=a; b++)
    {
        printf("%d ", b);
    }
    }
    else
    {
        printf("The Number Series is Not Possible Print");
    }
    return 0;
}