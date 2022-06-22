#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, rev=0;
    scanf("%d", &a);
    c=a;
    a=abs(a);
    while(a!=0)
    {
    	b=a%10;
        a=a/10;
        rev=rev*10+b;
    }
    if(c>0)
    {
    	printf("%d", rev);
	}
	else
	{
		printf("-%d", rev);
	}
	return 0;
}