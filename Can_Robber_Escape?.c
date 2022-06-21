#include<stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int a[size], i, count=0;
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<size; i++)
    {
        if(a[i]%2!=0)
        {
            count+=1;
        }
    }
    if(count<=2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}