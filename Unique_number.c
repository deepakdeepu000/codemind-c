#include<stdio.h>
void unique(int *a,int n)
{
	int i,j,k=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]==a[j])
			{
				printf("Not Unique Number");
				k+=1;
				break;
			}
		}
		if(k>0)
		{
			break;
		}
	}
	if(k==0)
	{
		printf("Unique Number");
	}
}
int main()
{
	int a,b,k,ar[100],n=0;
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		ar[n++]=b;
		
	}
	unique(ar,n);
}