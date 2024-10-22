#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int stack[MAX],top=-1;

void push()
{
	int element;
	if(top==MAX-1)
	{
		printf(" stack overflow");
		return ;
	}
	printf("Enter the element to be pushed");
	scanf("%d",&element);
	top++;
	stack[top]=element;
	printf("%d inserted to the stack\n",element);
}
void pop()
{
	if(top==-1)
	{
		printf("stack underflow");
		return ;
	}
	printf("element to be deleted is %d",stack[top]);
	top--;
}
void display()
{
	if(top==-1)
	{
		printf("stack is empty");
		return ;
	}
	printf("stack elements are:");
	for(int i=top;i>=0;i--)
	{
		printf("%d",stack[i]);
	}
}

	
int main()
{
	int ch;
	while(1){
		printf("\n____stack program____\n");
		printf(" 1.Push\n ");
		printf(" 2.Pop\n ");
		printf(" 3.Display\n ");
		printf(" 4.Exit\n ");
		printf(" Enter your choice\n ");
		scanf("%d",&ch);
		
		switch (ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit (0);
				
			default:
				printf("invalid choice");
		}
	}
}
			
			
		
		


