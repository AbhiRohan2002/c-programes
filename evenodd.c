#include<stdio.h>
int main()
{
	int i=1,sum1=0,sum2=0;
	
	while(i<=50)
	{
		if(i%2==0)
	{
	sum1 = sum1 + i; 
	}	
	else{	
	sum2 = sum2 + i;
    }
    i++;
    }

	printf("the sum of first 50 even numbers is%d\n",sum1);
	printf("the sum of first 50 odd numbers is%d\n",sum2);

}
