#include<stdio.h>
#define MAX 10
void push(int);
int pop();
void print();
int top=-1,stk[MAX];

int main(){
	
	push(10);
	push(20);
	push(30);
	printf("%d\n",pop());
	push(40);
	print();//
	printf("%d\n",pop());
	printf("%d\n",pop());
	push(50);
	printf("%d\n",pop());
	printf("%d\n",pop());
	printf("%d\n",pop());
	
	print();
}

void push(int item){
	if(top==MAX-1){
		printf("Stack Overflow!\n");
		return;
    }
	stk[++top]=item;
}

int pop(){
	if(top==-1)
	printf("Stack Underflow!");
	else
	return stk[top--];
}

void print(){
	int i;
	for(i=0;i<=top;i++){
		printf("%d  ",stk[i]); 
			}
			printf("\n");
}
