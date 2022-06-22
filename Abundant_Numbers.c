#include<stdio.h>
int main()
{
    int n, i, a, c=0;
    scanf("%d", &n);
    a=n;
    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            c+=i;
        }
    }
    if(c>a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}