#include<stdio.h>
int factorial(int);
int main()
{
  int fact,n;
  printf("enter n\n");
  scanf("%d",&n);
  fact=factorial(n);
  printf("%d is factorial of %d\n",fact,n);
}
 int factorial(int x)
 {
 	if(x==0||x==1)
 	return 1;
 	else
 	return x*factorial(x-1);
 }
  
