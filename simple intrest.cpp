#include<stdio.h>
int main()
{
	int m1,m2,m3,rollno,per;
	char name[20];
	printf("enter the rn,name,marks");
    scanf("%d%s%d%d%d",&rollno,name,&m1,&m2,&m3);
    per=(m1+m2+m3)/3;
    
    switch(per/10){
    	case 10:
        case 9:
        case 8:
        case 7: printf("DIST");
                break;
        case 6:printf("First");break;
		case 5:printf("Second");break;
		case 4:printf("Third");break;
		case 3:
		case 2:
		case 1:
		case 0: printf("Fail");break;
		default:printf("Please enter marks for 100 only")	;	
	}
    
}
