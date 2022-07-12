#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=20;i++)
	printf("%d x %d = %d\n",n,i,n*i);
}
