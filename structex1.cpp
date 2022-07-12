#include<stdio.h>
#include<string.h>

struct emp{
	int eid;
	char ename[20];
	float sal;
};
 
void printemp(struct emp);
float calsal(float);

 int main(){
 
 struct emp e1={101,"ABC",10000},e2,*ptr,e3={199,"PQR",54321.28};
 float totsal;
 e2.eid=100; //
 strcpy(e2.ename,"XYZ");
 e2.sal=12345;
 
 ptr=&e1;
 
 printf("EMP 1 details: using pointer - arrow operator\n");
 printf("EID:%d\nEName:%s\nEsal:%.2f\n",ptr->eid,ptr->ename,ptr->sal); 

 printemp(e2); // structure variable as argument - actual 

 totsal=calsal(e3.sal); // structure member as parameter
 printf("Total Sal of E3: %.2f\n",totsal);
 
 }
 
 float calsal(float s){
 	return s+10000;
 }
 
 
 void printemp(struct emp e){

  printf("EMP 2 details: Normal using . operator\n");
  printf("EID:%d\nEName:%s\nEsal:%.2f\n",e.eid,e.ename,e.sal); 
  
 }
