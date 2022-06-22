#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%s", s);
    int i, j, c=0;
    if(strlen(s) == 10 && s[0]!=0)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}