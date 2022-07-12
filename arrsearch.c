#include<stdio.h>
int main()
{
	int arr[9],i,x,found=0;
	printf("\nenter the elements");
	
	for(i=0;i<9;i++)
	scanf("%d",&arr[i]);
	printf("%d\t",arr[i]);
	
	printf("\nentre element to search");
	scanf("%d",&x);
	
	for(i=0;i<9;i++)
	{
		if(x==arr[i])
		{
			found=1;
			break;
		}
	}
	if(found==1)
	printf("\n %d is found at index %d",x,i);
	else
		printf("\n %d is not found",x);
}
