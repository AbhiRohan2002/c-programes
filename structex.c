#include<stdio.h>
#include<string.h>

struct student{
	int id;//4
	char name[20];//20
	int marks[3];//12
	
} s[3];

 int main()
 {
 	//struct student s[3]; 
 	int i,j,sum;
 	
 	for(i=0;i<3;i++)
    {     
	printf("enter student %d details(id,name)\n",i+1);
 	scanf("%d%s",&s[i].id,s[i].name);
 	
 	for(j=0;j<3;j++){
 		printf("enter student: %s marks in subject %d",s[i].name, j+1);
        scanf("%d",&s[i].marks[j]);
	 }
 	
    }
    
    
    for(i=0;i<3;i++)
    {     
	printf("Student %d details:\n",i+1);
 	printf("ID:%d\nName:%s\n",s[i].id,s[i].name);
 	sum=0;
 	for(j=0;j<3;j++){
 		sum=sum+s[i].marks[j];
	 }
 	printf("AVG:%d\n",(sum/3));
    }
    
 }
 
