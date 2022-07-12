#include<stdio.h>
void prime();
void armstrong();
void perfect();
int factorial();
void evenodd();
void reverse();

int main()
{
	int option,f;
	char ch='y';
	
	//printf("enter n value");
	//scanf("%d",&n);
	
	while(ch=='y')
	{
		printf("Programs Menu! Please choose proper menu item no. to proceed!\n");
		printf("1.prime\n2.armstrong\n3.perfect\n4.factorial\n5.evenodd\n6.reverse no\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:prime();
			       break;
			case 2:armstrong();
			       break;
		    case 3:perfect();
		           break;
		    case 4:f=factorial();
		           printf("%d is the factorial\n",f);
			       break;
			case 5:evenodd();
			       break;
			case 6:reverse();
			       break;
			default:printf("enter proper number between 1-5\n");    
		}
		printf("do you wish to continue(press y)\n");
		scanf(" %c",&ch);
	}
}

void prime()
{
	int i=1,count=0,x;
	printf("enter a value");
	scanf("%d",&x);
	while(i<=x/2)
	{
		if(x%i==0)
		{
			count++;
			if(count>1)
			break;
		}
		i++;
	}
	if(count==1)
	printf("%d is prime\n",x);
	else
	printf("%d is not prime\n",x);
}

void armstrong()
{
	int x,d,sum=0,y;
	printf("enter the value of x\n");
	scanf("%d",&x);
	y=x;
	while(x>0)
	{
		d=x%10;
		sum=sum+d*d*d;
		x=x/10;
	}
	if(sum==y)
	printf("%d is armstrong\n",y);
	else
	printf("%d is not armstrong\n",y);
}
void perfect()
{
    int x,i=1,sum=0;
	printf("enter the value of x\n");
	scanf("%d",&x);
	while(i<=x/2)
	{
		if(x%i==0)
		{
			sum=sum + i;
		}
		i++;
	}
	if(sum==x)
	printf("%d is a perfect no\n",x);
	else
	printf("%d is not a perfect no\n",x);

}
int factorial()
{
	int x,i,fact=1;
	printf("enter the value of x\n");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	fact=fact*i;
	return fact;
}
void evenodd()
{
	int x;
	printf("enter the value of x\n");
	scanf("%d",&x);
	if(x%2==0)
	printf("%d is even\n",x);
	else
	printf("%d is odd\n",x);
}
void reverse()
{
		int x,d,rev=0,y;
	printf("enter the value of x\n");
	scanf("%d",&x);
	y=x;
	while(x>0)
	{
		d=x%10;
		rev=rev*10+d;
		x=x/10;
	}
	printf("%d is reverse of %d\n",rev,y);
	
}
