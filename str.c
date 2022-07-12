#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   char city[15],t;
   int i,j;
   int len;
   printf("enter city");
   scanf("%s",city);
     len=strlen(city);
   for(i=0;i<len;i++)
   {
      for(j=i+1;j<len;j++)
      {
      	if(city[i]>city[j])
      	{
      		t=city[i];
      		city[i]=city[j];
      		city[j]=t;
		  }
	  }
   }
printf("sorted city -%s",city);
}
