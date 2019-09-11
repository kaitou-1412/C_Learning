#include <stdio.h>
#include <stdlib.h>
#define SWAP(X, Y, T) (T=X, X=Y, Y=T)
struct node 
{
    int data;                        //Data of the node
    struct node *ptr;           //Address of the next node
}*start, *n, *last, *npr;
struct node *creationSLL(struct node *start)
{
    int num, i;
    struct node *n;
    printf("Enter number of elements\n");
    scanf("%d", &num);
    printf("Enter Elements\n");
    for (i = 0; i < num; i++)
    {
        n = (struct  node *)malloc(sizeof(struct node));
        scanf("%d", &(n->data));
        //n->ptr = NULL;
        if (start == NULL)
            start = n;
        else
            last->ptr = n;
        last = n;
    }
    last->ptr = NULL;
    return start;
}
struct node *insertionSLL(struct node *start, int pos, int ele)
{
	struct node *n, *npr;
    n = (struct  node *)malloc(sizeof(struct node));
    n->data = ele;
    //n->ptr = NULL;
    if (pos == 1)
    {
        n->ptr = start;
        start = n;    
    }
    else
    {
    	int i;
        npr = start; 
        for (i = 2; i < pos; i++)
        {
        	if (npr->ptr!=NULL)
            	npr = npr->ptr;
        }
        n->ptr = npr->ptr;
        npr->ptr = n;
    }
    return start;
}
struct node *deletionSLL(struct node *start, int pos)
{
    struct node *n;
    n = (struct  node *)malloc(sizeof(struct node));
    // t->ptr = NULL;
    if (pos == 1)
    {
        n = start; 
        start = n->ptr;   
    }
    else
    {
    	int i;
        npr = NULL; 
        n = start;
        for (i = 1; i < pos; i++)
        {
        	if (n->ptr!=NULL)
        	{
        		npr = n;
            	n = n->ptr;
            } 
        }
        npr->ptr = n->ptr;
    }
    free(n);
    return start;
}
void printingSLL(struct node *start)
{
	//printf("\n Linked List : \n");
	struct node *n;
    for (n = start; n!=NULL; n=n->ptr)
    {
        printf("->%d", n->data);
    }
    printf("\n");
}
void searchSLL(struct node *start, int ele)
{
	struct node *n;
	int count = 0;
    for (n = start; n!=NULL; n=n->ptr)
    {
        ++count;
        if (n->data == ele)
        {
            break;
        }
    }
    if(count)
    	printf("%d is at position %d\n", ele, count);
    else
    	printf("%d not found\n", ele);
}
struct node *SelectionSortSLL(struct node *start)
{
    struct node *i, *j, *min;
    i = start;		//i=1;
    int count = 1;		
    int temp;
    while(i->ptr)	//i<num
    {
        min = i;
        j = i->ptr;		//j=i+1;
        while(j)		//j<=num;
        {
            /* Find minimum element from array */ 
            if(j->data < min->data)	//array[j]<array[min]
                min = j;
            j = j->ptr;		//j++;
        }
        SWAP(i->data, min->data, temp); //Swap array[j] and array[min]
        if(count) start = i;
        i = i->ptr;		//i++;
    	count = 0;
    }
    return start;
} 
struct node *reverseSLL(struct node *start)
{
    struct node *nprev, *n, *nnext;
    nprev = NULL;
    n = start;
    nnext = start->ptr;
    while(n->ptr!=NULL)
    {
        n->ptr = nprev;
        nprev = n;
        n = nnext;
        nnext = nnext->ptr;
    }
    n->ptr = nprev;
    start = n;
    return start;
}
int main()
{
    int n, k = 1;
    printf("\nOperations are:\n");
    printf("1. Create\n");
    printf("2. Insert\n");
    printf("3. Delete\n");
    printf("4. Display\n");
    printf("5. Search\n");
    printf("6. Sort\n");
    printf("7. Reverse\n");
    printf("8. Exit\n\n");
    do
    {
        printf("\nEnter Operation number\n");
        int x, pos, ele;
        scanf("%d", &x);
        switch(x)
        {
            case 1:start = creationSLL(start);
                break;
            case 2:printf("Enter Element and Position\n");
    			scanf("%d%d", &ele, &pos);
            	start = insertionSLL(start, pos, ele);
                break;
            case 3:printf("Enter Position\n");
    			scanf("%d", &pos);
            	start = deletionSLL(start, pos);
                break;
            case 4:printf("Linked List : \n");
            	printingSLL(start);
                break;
            case 5:printf("Enter Element to be searched\n");
    			scanf("%d", &ele);
    			searchSLL(start, ele);
                break;
            case 6:start = SelectionSortSLL(start);
            	printf("Sorted Linked List\n");
            	printingSLL(start);
                break;
            case 7:start = reverseSLL(start);
            	printf("Reversed Linked List\n");
            	printingSLL(start);
                break;
            case 8:k = 0;
                break;
            default:printf("Error\n");
        }
    }
    while(k);
    return 0;
}