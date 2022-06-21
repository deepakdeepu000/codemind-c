#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, r, ans;
    scanf("%d%d%d", &a, &b, &c);
    r=pow(a, b);
    printf("%d", r%c);
}