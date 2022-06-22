#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],i,c,max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     scanf("%d",&c);
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(max-a[i]<=c)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
    
}