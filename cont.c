#include<stdio.h>
int main()
{
	char tt[100]="she sells sea shells on the sea shore";
	int i,count=0;
	for(i=0;tt[i]!='\0';i++)
	{
		if(tt[i]!='s')
		continue;
		count++;
	}
	printf("number of occurence of s is %d",count);
}
