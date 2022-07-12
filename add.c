#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr,i,sum=0;
	
	ptr=(int*)calloc(5,sizeof(int));
	
	printf("enter the number of elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",(ptr+i));
	}

    ptr=(int*)realloc(ptr,10*sizeof(int));
    
    for(i=5;i<10;i++)
	{
		scanf("%d",(ptr+i));
	}

	for(i=0;i<10;i++)
	{
		sum=sum+*(ptr+i);
	}
	printf("%d",sum);
	free(ptr);
}

