#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int a[size], i, b=1, count=0;
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<size; i++)
    {
        while(a[i]!=0)
    {
        b*=a[i];
        a[i]=a[i]-1;
    }
    printf("%d
", b);
    b=1;
    }
    return 0;
}