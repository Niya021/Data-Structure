#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1, count = 0;


void enqueue()
{
	int elem;
	if(count==MAX)
	{
		printf("Circular queue is full\n");
	}
	printf("Insert element to be enqueued\n");
	scanf("%d",&elem);
	if(front==-1)
	{
		front=0;
	}
	rear=(rear+1)%MAX;
	queue[rear]=elem;
	count++;
	printf("%d enqueued to the queue",elem);
}
void dequeue()
{
	if (count == 0) 
	{
		printf("Circular queue is empty! No elements to dequeue.\n");
		return;
	}
	printf("Dequeued element: %d\n", queue[front]);
	front = (front + 1) % MAX;
	count--;
}
void display()
{
	if(count=0)
	{
		printf("Circular queue is empty");
		return;
	}
	int j = front;
	printf("Queue elements are:\n");
	for (int i = 0; i < count; i++)
        {
		printf("%d ", queue[j]);
		j = (j + 1) % MAX; 
	}
	printf("\n");
}
		


int main()
{



	int ch;
	while(1){
			printf("\n--------Circular Queue Program-------\n");
			printf(" 1.Enqueue\n");
			printf(" 2.Dequeue\n");
			printf(" 3.Display\n");
			printf(" 4.Exit \n");
			printf("Enter your choice\n");
			scanf("%d",&ch);
				switch (ch)
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
						exit (0);
				
					default:
						printf("invalid choice");
				}
		}
		return 0;
}
