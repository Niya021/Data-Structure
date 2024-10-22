#include<stdio.h>
#include<stdlib.h>

# define MAX 5
int queue[MAX],front=-1,rear=-1;


void enqueue()
{
	int element;
	if(rear==MAX-1)
	{
		printf("queue overflow");
		return;
	}
	printf("Enter the element to be inserted\n");
	scanf("%d",&element);
	if(front==-1)
	{
		front=0;
	}
	rear++;
	queue[rear]=element;
	printf("%d inserted to the queue.\n",element);
}
void dequeue()
{
	if(front==-1||front>rear)
	{
		printf("Queue underflow");
		return;
	}
	printf("deleted element is %d\n",queue[front]);
	front++;
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("Queue is empty\n");
		return;
	}
	printf("queue elements are \n");
	for(i=front;i<=rear;i++)
	{
		printf("%d",queue[i]);
	}
	printf("\n");
}
	

	
int main()
{
	int ch;
	while(1)
		{
			printf("\n-----Queue ------\n");
			printf(" 1.Insertion\n");
			printf(" 2.Deletion\n");
			printf(" 3.Display\n");
			printf(" 4.Exit\n");
			printf(" Enter your choice\n ");
			scanf("%d",&ch);
			
			switch(ch)
			{
				case 1:
					enqueue();
					break;
				case 2:
					dequeue();
					break;
				case 3:
					display();
					break;
				case 4:
					exit(0);
				default:
					printf("Invalid choice");
			}
		}
		return 0;
}
			
