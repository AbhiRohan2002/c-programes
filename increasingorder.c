#include<stdio.h>
int main()
{
  int arr[10],n,i,j,temp;
  
  printf("enter the size of array");
  scanf("%d",&n);
  
  printf("enter %d elements",n);
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  
  for(i=0;i<n;i++)
  {
  	for(j=1+i;j<n;j++)
  	{
  		if(arr[i]>arr[j])
  		{
  			temp=arr[i];
  			arr[i]=arr[j];
  			arr[j]=temp;
		  }
	  }
  }
  for(i=0;i<n;i++)
  printf("\t%d",arr[i]);
  printf("\n");
}

