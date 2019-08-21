#include <stdio.h>
void create(int [], int, int);
int insert(int [], int, int);
int del(int [], int, int);
void print(int [], int, int);
void search(int [], int, int);
void update(int [], int, int);
int main()
{
	int size = 100;
	int a[100], k=0;
	int fai;
	printf("Enter number of elements\n");
	scanf("%d", &fai);
	fai--;
	do
	{
		printf("\nOperations are:\n");
		printf("1. Create\n");
		printf("2. Insert\n");
		printf("3. Delete\n");
		printf("4. Print\n");
		printf("5. Search\n");
		printf("6. Update\n");
		printf("7. Exit\n");
		printf("Enter Operation number\n");
		int x;
		scanf("%d", &x);
		switch(x)
		{
			case 1:create(a, size, fai);
				break;
			case 2:fai = insert(a, size, fai);
				break;
			case 3:fai = del(a, size, fai);
				break;
			case 4:print(a, size, fai);
				break;
			case 5:search(a, size, fai);
				break;
			case 6:update(a, size, fai);
				break;
			case 7:k = 1;
				break;
			default:printf("Error\n");
		}
	}
	while(k == 0);
	return 0;
}
void create(int a[], int size, int fai)
{
	printf("Enter elements\n");
	for (int i = 0; i <=fai; ++i)
	{
		scanf("%d", &a[i]);
	}
}
int insert(int a[], int size, int fai)
{
	int ele, pos;
	printf("Enter element and its position\n");
	scanf("%d%d", &ele, &pos);
	if (fai<size-1&&pos-2<=fai&&pos>=1)
	{
		for (int i = fai; i>=pos-1; i--)
		{
			a[i+1] = a[i];
		}
		a[pos-1] = ele;
		fai++;
	}
	else
	{
		printf("Not Possible\n");
	}
	return fai;
}
int del(int a[], int size, int fai)
{
	int pos;
	printf("Enter element's position\n");
	scanf("%d", &pos);
	if (fai!=-1&&pos-1<=fai&&pos>=1)
	{
		for (int i = pos-1; i <=fai-1; i++)
		{
			a[i] = a[i+1];
		}
		fai--;
	}
	else
	{
		printf("Not Possible\n");
	}
	return fai;
}
void print(int a[], int size, int fai)
{
	for (int i = 0; i <=fai; ++i)
	{
		printf("%d ", a[i]);
	}
}
void search(int a[], int size, int fai)
{
	int ele, c=0;
	printf("Enter element\n");
	scanf("%d", &ele);
	for (int i = 0; i <=fai; ++i)
	{
		if (ele == a[i])
		{
			printf("Found it's position: %d\n", (i+1));
			c++;
		}
	}
	if (c == 0)
	{
		printf("Not Found\n");		
	}
}
void update(int a[], int size, int fai)
{
	printf("Enter element position\n");
	int ele, pos;
	scanf("%d", &pos);
	printf("Enter new element\n");
	scanf("%d", &ele);
	a[pos - 1] = ele;
}