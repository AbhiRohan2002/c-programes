#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
    
	printf("%d is big",(a>b && a>c?a:b>c?b:c));
}
