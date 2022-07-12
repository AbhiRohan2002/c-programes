#include<stdio.h>
int main()
{
	int start,end,i,d,j,sum,count=0;
	
	printf("enter range - start and end"); //
	scanf("%d %d",&start,&end);
	
	for(i=start;i<=end;i++)
	{
		sum=0;
	    j=i;
		while(j>0)
		{
			d=j%10;
			sum=sum+d*d*d;
			j=j/10;
		}
		if(sum==i)
		{
			printf("%d is an armstrong number\n",i);
			count++;
			}	
	}
	printf("No. armstrong nos:%d",count);
   }
	





