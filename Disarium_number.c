#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int n1=n,c=0;
    while(n1!=0)
    {
        n1/=10;
        c++;
    }
    n1=n;
    int s=0;
    while(n1!=0)
    {
        int r=n1%10;
        s+=pow(r,c);
        n1/=10;
        c--;
    }
   if(s==n)
    printf("True");
   else
    printf("False");
}