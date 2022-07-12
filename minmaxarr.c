#include<stdio.h>
int main()
{
	int arr[]={12,5,7,8,9,11,3,99,101,55};
	int i,max,min;
	
	max=arr[0];
	min=arr[0];
	
	for(i=0;i<10;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		
		if(arr[i]<min)
		min=arr[i];
	}
	printf("max=%d\t min=%d\n",max,min);
}
