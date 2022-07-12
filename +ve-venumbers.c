//program to find wether a number is +ve or-ve and prime
#include<stdio.h>
void prime(int);//fuc declaration
void sign(int);

int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	
	prime(n);//fc
	
	sign(n);//fc
}
void prime(int x)
{
	int i=1,count=0;
	while(i<=x/2)
	{
		if(x%i==0){
		count++;
		if(count>1)
		break;
	   }
	   i++;
	}

 if(count==1)
printf("%d is prime\n",x);
else
printf("%d is not prime\n",x);
}

void sign(int x)
{
	if(x>=0)
	printf("%d is positive\n",x);
	else
	printf("%d is negative\n",x);
}
