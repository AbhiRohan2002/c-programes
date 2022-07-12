#include<stdio.h>
int main()
{
   int n1,n2,i=1,n,n3;
   printf("enter the number of terms in series");
   scanf("%d",&n);
    n1=0;
	n2=1;
    printf("%d\t%d\t",n1,n2);
    while(i<=n)
    {
    	n3=n2+n1;
    	printf("%d\t",n3);
    	n1=n2;
    	n2=n3;
    	//i++;
	}
}
