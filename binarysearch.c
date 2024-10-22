
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int list[20], i, item, n; 
    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &list[i]);
    }
    printf("Enter the item to search: ");
    scanf("%d", &item);
    int s=0,e=n-1;
    
    while(s<=e)
    {
    	int mid=(s+e)/2;
    	if(list[mid]==item)
    	{
    		printf("item present at index %d\n",mid);
    		break;
    	}
    	else if(list[mid]<item)
    	{
    		s=mid+1;
    	}
    	else if(list[mid]>item)
    	{
    		e=mid-1;
    	}
    	else
    	{
    		printf("Item not present in the list.\n");
    	}
    }
    
    return 0;
}
 

