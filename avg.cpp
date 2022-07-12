#include<stdio.h>
int main()
{
	int m1,m2,m3,sum=0;
	float avg;
	printf("enter the numbers\n");
	scanf("%d %d %d", &m1, &m2, &m3);
	sum = m1 + m2 + m3;
	avg = sum / 3;
	printf("%.2f is average marks",avg); 
	return 0;
}
