#include<stdio.h>
int main()
{
	int i,arr[5],sum=0;
	printf("enter five elements");
	
	for(i=0;i<5;i++)
     {
	   scanf("%d",&arr[i]);
     }
      for(i=0;i<5;i++) 
	  {
	  printf("%d\t",arr[i]);
      }
    arr[2]=-7;
    arr[0]=arr[4];
    arr[3]=arr[2]-arr[1];
    for(i=0;i<5;i++) 
	{
	printf("%d\t",arr[i]);
    }

      for(i=1;i<=3;i++)
      {
      	sum=sum+arr[i];
      	printf("sum=%d\n",sum);
	  }
}
      
