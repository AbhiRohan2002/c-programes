#include<stdio.h>
int main()
{
	int i,sum1=0,sum2=0;
	for(i=1;i<=50;i++)
	{
		if(i%2==0)
	{
	sum1 = sum1 + i; 
	}	
	else{
		
	sum2 = sum2 + i;
    }
    }

	printf("the sum of first 50 even numbers is%d\n",sum1);
	printf("the sum of first 50 odd numbers is%d\n",sum2);

}
