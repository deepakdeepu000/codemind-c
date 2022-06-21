#include<stdio.h>
int main()
{
    int a, i, c=0;
    scanf("%d", &a);
    for(i=1; i<a; i++)
    {
        if(a%i==0)
        {
            c+=i;
        }
    }
    if(c==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}