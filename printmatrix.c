#include<stdio.h>
int main()
{
	int A[4][4];
	int i,j;
	
	printf("enter emelemts in A\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		scanf("%d",&A[i][j]);
	}
	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4;j++)
		printf("\t%d",A[i][j]);
	
}
    
}
