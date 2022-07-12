#include<stdio.h>
int main()
{
    char ch;
	FILE *fp=fopen("xyz.txt","r+");
	
	
	while((ch=fgetc(fp))!=EOF){
	printf("%c",ch);
	}
	fclose(fp);

	}
