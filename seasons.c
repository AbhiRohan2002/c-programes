#include<stdio.h>
int main()
{
	printf("enter month number:");
	int month;
	scanf("%d", &month); 
	
	switch(month)
	{
		case 1 :
		case 2 :
		      printf("its winter season");
		      break;
		case 3 :
		case 4 :
		      printf("its spring season");
		      break;
		case 5 :
		case 6 :
		      printf("its summer season");
			  break;
		case 7 :
		case 8 :
		      printf("its monsoon season");
			  break;
		case 9 :
		case 10:
		       printf("its autumn season");
			   break;
		case 11:
		case 12:
		       printf("its pre-winter season");
			   break;
		default:
		        printf("invalid please enter number between 1 and 12"); 	   
	}
	
}
