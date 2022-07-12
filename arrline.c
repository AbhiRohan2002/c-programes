#include<stdio.h>
int main()
{
	int arr[10]={12,5,7,8,9,11,3,99,101,55};
	int i,count=0;
	
	for(i=9;i>=0;i--)
	{
		if(count%3==0)
		printf("\n");
		
		count++;
 printf("%d\t",arr[i]);
}
}
