#include<stdio.h>
#include<math.h>
int main()
{
    int size;
    scanf("%d", &size);
    int a[size], i, b, c;
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<size; i++)
    {
        b=sqrt(a[i]);
        if(pow(b, 2)==a[i])
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    return 0;
}