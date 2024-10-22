#include<stdio.h>
#include<stdlib.h>

int n,a[10];

void create()
{
	int i;
	printf("Enter limit");
	scanf("%d",&n);
	printf("Enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void insert()
{
	int pos,num;
	if(n>=10)
	{
		printf("array is full");
		return;
	}
	printf("Enter the position to insert");
	scanf("%d",&pos);
	printf("Enter the number:");
	scanf("%d",&num);
	if(pos<0||pos>n)
	{
		printf("Invalid Position");
	}
	else
	{
		for(int i=n-1;i>=pos;i--)
		{
			a[i+1]=a[i];
		}
		a[pos]=num;
		n++;
		printf("\n new number inserted");
	}
}
void delete()
{
	if(n==0)
	{
		printf("array is empty");
	}
	int pos,num;
	printf("Enter the position to delete");
	scanf("%d",&pos);
	if(pos<0||pos>n)
	{
		printf("Invalid Position");
	}
	else
	{
		for(int i=pos;i>=pos;i--)
		{
			a[i]=a[i+1];
		}
		n--;
		printf("\n deleted element");
	}
}
void display()
{
	if(n==0)
	{
		printf("array empty");
	}
	else
	{
		printf("The array is :");
		for(int i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
	}
}	
		



int main()
{
	int ch;
	while(1){
			printf("\n____stack program____\n");
			printf(" 1.Creation\n ");
			printf(" 2.Insertion\n ");
			printf(" 3.Deletion\n ");
			printf(" 4.Display\n ");
			printf(" 5.Exit");
			printf(" Enter your choice\n ");
			scanf("%d",&ch);
		
				switch (ch)
				{
					case 1:
						create();
						break;
					case 2:
						insert();
						break;
					case 3:
						delete();
						break;
					case 4:
						display();
						break;	
					case 5:
						exit (0);
				
					default:
						printf("invalid choice");
				}
		}
		return 0;
}

