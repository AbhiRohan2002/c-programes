#include<stdio.h>
int main()
{
  	int m,n,i,j,fc,nc=0;
	printf("enter min and max values");
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		j=1;
		fc=0;
		while(j<=i/2)
		{
			if(i%j==0)
			{
				fc++;
				if(fc>1)
				break;
			}
			j++;
		}
		if(fc==1)
		{
			printf("%d\t",i);
			nc++;
		}
	}
	printf("\nnumber of primes in given range %d-%d is %d",m,n,nc);
}
