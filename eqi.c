#include<stdio.h>
int main()
{
	int i,n,s,j;
	printf("enter n value to print eq triangle");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		
		for(s=n-i;s>=1;s--)
		printf(" ");
		
		for(j=1;j<=i;j++)
		printf(" * ");
		
	}
}
