#include<stdio.h>
int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}
int findlcm(int *arr, int n)
{
  int k = arr[0];
  for (int i = 1; i < n; i++)
  {
      k=(arr[i]*k)/(gcd(arr[i],k));
  }
  return k;
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
    int k=findlcm(ar,n);
    printf("%d",k);
    
}