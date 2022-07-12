#include<stdio.h>
#include<string.h>
int main()
{
	char colours[5][8];
	//char colors[5][8]={"red","green","blue","yellow","orange"};
	int i,j;
	char temp[8];
	printf("enter five colours\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%s",colours[i]);
		printf("%s\n",colours[i]);
		
	}
	
	printf("\n Sorted order of colors:\n");
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcmp(colours[i],colours[j])>0)
			{
				strcpy(temp,colours[i]);
				strcpy(colours[i],colours[j]);
				strcpy(colours[j],temp);
			}
		}
	}
	
	for(i=0;i<5;i++)
	{
		printf("%s\n",colours[i]);
	}
	
}
