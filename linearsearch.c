
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int list[20], i, item, n, flag = 0; 
    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }
    printf("Enter the item to search: ");
    scanf("%d", &item);
    for (i = 0; i < n; i++) 
    {
        if (list[i] == item) 
        {
            printf("%d present at index %d\n", item, i); 
            flag = 1; 
            break; 
        }
    }
    if (flag == 0) 
    {
        printf("%d not found in the list.\n", item);
    }
    return 0;
}

