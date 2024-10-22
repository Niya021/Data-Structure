#include<stdio.h>
#include<stdlib.h>

    struct Node
    {
    	int data;
    	struct Node*link;
    };
    struct Node*start=NULL;
    
    struct Node*getnode()
    {
    	int item;
    	printf("enter the value to insert");
    	scanf("%d",&item);
    	struct Node*new_node=(struct Node*)malloc(sizeof(struct Node));
    	if(new_node==NULL)
    	{
    		printf("memory allocation failed!\n");
    		exit(1);
    	}
    	new_node->data=item;
    	new_node->link=NULL;
    	return new_node;
    }
    void insertAtHead()
    {
    	struct Node*new_node = getnode();
    	if(start == NULL)
    	{
    		start = new_node;
    	}
    	else
    	{
    		new_node->link=start;
    		start=new_node;
    	}
    }
    void insertAtTail()
    {
    	struct Node*new_node=getnode();
    	if(start==NULL)
    	{
    		start=new_node;
    	}
    	else
    	{
    		struct Node* ptr=start;
    		while (ptr->link!=NULL)
    		{
    			ptr=ptr->link;
    		}
		ptr->link=new_node;
	}
    }
    void deleteAtHead()
    {
    	if(start==NULL)
    	{
    		printf("List is empty,nothing to delete\n");
    	}
    	else
    	{
    		struct Node*ptr=start;
    		start=start->link;
    		free(ptr);
    		printf("Head node deleted successfully.\n");
    	}
    }
    void deleteAtTail()
    {
    	if(start==NULL)
    	{
    		printf("list is empty, nothing to delete.\n");
    	}
    	else if(start->link==NULL)
    	{
    		free(start);
    		start=NULL;
    		printf("tail node deleted successfully.\n");
    	}
    	else
    	{
    		struct Node*ptr=start;
    		struct Node*prev=NULL;
    		while(ptr->link!=NULL)
    		{
    			prev=ptr;
    			ptr=ptr->link;
    		}
    		prev->link=NULL;
    		free(ptr);
    		printf("Tail node deleted successfully.\n");
    	}
    }
    void traverse()
    {
    	if(start==NULL)
    	{
    		printf("list is empty.\n");
    	}
    	else
    	{
		struct Node* ptr=start;
		while(ptr!=NULL)
		{
			printf("-> %d",ptr->data);
			ptr=ptr->link;
		}
	}
   }
   void freeList()
   {
   	while(start!=NULL)
   	{
   		deleteAtHead();
   	}
   }


int main()
{
	int ch;
	while(1)
	{
		printf("--------Singly Linked List---------\n");
		printf(" 1.Insert at head\n");
		printf(" 2.Insert at tail\n");
		printf(" 3.Delete at head\n");
		printf(" 4.Delete at tail\n");
		printf(" 5.Traverse list\n");
		printf(" 6.Exit");
		printf(" \n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		
		switch (ch) {
			case 1:
				insertAtHead();
				printf("Node inserted at head.\n");
				break;
			case 2:
				insertAtTail(); 
				printf("Node inserted at tail.\n");
				break;
			case 3:
				deleteAtHead(); 
				break;
			case 4:
				deleteAtTail(); 
				break;
			case 5:
				printf("Current List: ");
				traverse(); 
				break;
			case 6:
				printf("Exiting program.\n");

				freeList(); 
				exit(0); 
		        default:
				printf("Invalid choice! Please choose a valid option.\n");
		}
	}
	return 0;
}
