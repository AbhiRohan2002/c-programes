#include<stdio.h>
int main()
{
	int start,end,n,d,sum=0;
	printf("entre range - start and end\n");
	scanf("%d %d",&start,&end);

	for(n=start;n<=end;n++)
	{
	    sum=0;
		for(d=1;d<n;d++)
		{
		if(n%d==0)
		sum = sum + d;
		}
		if(sum == n)
	    printf("%d ia a perfect number\t",n);
		
	}
}


