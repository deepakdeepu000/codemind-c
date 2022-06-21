#include<stdio.h>
int main()
{
    int a,b,c=0,d;
    scanf("%d",&a);
    b=a;
    while(a>0)
    {
        d=a%10;
        c=c*10+d;
        a=a/10;
    }
    if(b == c)
      {
          printf("True");
      }
      else
      {
    printf("False");
      }
}