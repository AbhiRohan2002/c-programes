#include<stdio.h>
int main()
{
	int i,sum1=0,sum2=0,arr[10]={1,2,3,4,5,6,7,8,9,10};
	
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
	    printf("%d\t",arr[i]);
	    sum1=sum1+arr[i];
	    printf("\n");
        }
    	if(arr[i]%2!=0)
    	printf("%d\t",arr[i]);
    	sum2=sum2+arr[i];
	}
	printf("sum1=%d\n",sum1);
	printf("sum2=%d\n",sum2);
	
}

