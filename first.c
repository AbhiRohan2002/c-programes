#include<stdio.h>
int main(){
	int rollno;
	char name[20];
	char grade;
	float cgpa;
	
	printf("enter roll no,name,grade,cgpa");
	
	scanf("%d%s %c%f",&rollno,name,&grade,&cgpa);
	
	printf("name=%s\nroll no=%d\ngrade=%c\ncgpa=%f",name,rollno,grade,cgpa);
}
	

