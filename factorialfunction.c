#include<stdio.h>
int factorial(int);// function declaration
int main()
{
	int n,fact;
	printf("enter number");
	scanf("%d",&n);
	
	fact=factorial(n);// function call
	printf("factorial of %d is %d\n",n,fact);
}
int factorial(int x){// function defination
	int i,f=1;
	
	for(i=1;i<=x;i++)
	f=f*i;
	
	return f;
}
