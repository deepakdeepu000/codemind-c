#include<stdio.h>
int main()
{
    int a, b, c, i, count=0;
    scanf("%d %d %d", &a, &b, &c);
    for(i=a; i<=b; i++)
    {
        if(i%c == 0)
        {
            count+=1;
        }
    }
    printf("%d", count);
    return 0;
}