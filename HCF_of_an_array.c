#include<stdio.h>
int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}
int findHcf(int *arr, int n)
{
  int res = arr[0];
  for (int i = 1; i < n; i++)
  {
    res = gcd(arr[i], res);
 
    if(res == 1)
    {
    return 1;
    }
  }
  return res;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)  
    {
        scanf("%d",&ar[i]);
    }
    int k=findHcf(ar,n);
    printf("%d",k);
    
}